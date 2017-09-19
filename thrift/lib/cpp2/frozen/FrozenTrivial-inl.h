/*
 * Copyright 2004-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

namespace apache { namespace thrift { namespace frozen {

namespace detail {

/**
 * Default serialization, which does little more than reinterpret_cast. Used for
 * POD structs and floats, but not pointers and integrals. Layout merely
 * specifies byte count required. Layout is simply the number of bytes needed.
 * Freezing/thawing is done by simply assigning to a reinterpreted pointer.
 */
template <class T>
struct TrivialLayout : public LayoutBase {
  typedef LayoutBase Base;
  TrivialLayout() : LayoutBase(typeid(T)) {}

  FieldPosition maximize() {
    return FieldPosition(sizeof(T), 0);
  }

  FieldPosition layout(LayoutRoot&, const T&, LayoutPosition /* start */) {
    return maximize();
  }

  void freeze(FreezeRoot&, const T& o, FreezePosition self) const {
    if (size == sizeof(T)) {
      *reinterpret_cast<T*>(self.start) = o;
    } else {
      throw LayoutException();
    }
  }

  void thaw(ViewPosition self, T& out) const {
    if (size == sizeof(T)) {
      out = *reinterpret_cast<const T*>(self.start);
    } else {
      out = T{};
    }
  }

  void print(std::ostream& os, int level) const override {
    LayoutBase::print(os, level);
    os << "blitted " << folly::demangle(type.name());
  }

  typedef T View;
  View view(ViewPosition self) const {
    View v;
    thaw(self, v);
    return v;
  }

  static size_t hash(const T& value) {
    return std::hash<T>()(value);
  }
};

template <class T>
struct IsBlitType
    : std::integral_constant<
          bool,
          (folly::IsTriviallyCopyable<T>::value && !std::is_pointer<T>::value &&
           !std::is_enum<T>::value && !std::is_integral<T>::value)> {};
}

template <class T>
struct Layout<T, typename std::enable_if<detail::IsBlitType<T>::value>::type>
    : detail::TrivialLayout<T> {};

}}}
