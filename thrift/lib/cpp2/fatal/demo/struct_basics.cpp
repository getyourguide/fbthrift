/*
 * Copyright 2016 Facebook, Inc.
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

#include <thrift/lib/cpp2/fatal/reflection.h>

#include <thrift/lib/cpp2/fatal/demo/gen-cpp2/data_fatal_types.h>

#include <folly/init/Init.h>

#include <iostream>

using namespace apache::thrift;
using namespace static_reflection::demo;

struct print_struct_member {
  template <typename Member, std::size_t Index, typename T>
  void operator ()(fatal::indexed<Member, Index>, T const &object) const {
    auto name = fatal::z_data<typename Member::name>();
    auto const &value = Member::getter::ref(object);
    std::cout << "  " << name << " = " << value << '\n';
    std::cout << "  - type class: "
      << folly::demangle(typeid(typename Member::type_class)) << '\n';
    std::cout << "  - concrete type: "
      << folly::demangle(typeid(typename Member::type)) << '\n';
    std::cout << '\n';
  }
};

template <typename T>
void print_struct_info(T const &object) {
  using info = reflect_struct<T>;

  std::cout << "struct name: " << fatal::z_data<typename info::name>() << '\n';

  std::cout << '\n';

  fatal::foreach<typename info::members>(print_struct_member(), object);
}

int main(int argc, char **argv) {
  folly::init(&argc, &argv);

  simple_struct value;
  value.i32_data = 12345678;
  value.i16_data = 4321;
  value.double_data = 3.1415926;
  value.string_data = "hello, world";

  print_struct_info(value);

  return 0;
}
