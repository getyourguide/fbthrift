/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/io/Cursor.h>
#include <folly/io/IOBuf.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>


// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace some { namespace ns {
class ModuleA;
class ModuleB;
class ExceptionA;
class ExceptionB;
}} // some::ns
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace some { namespace ns {
class ModuleA : private apache::thrift::detail::st::ComparisonOperators<ModuleA> {
 public:

  ModuleA() :
      i32Field(0) {}
  // FragileConstructor for use in initialization lists only

  ModuleA(apache::thrift::FragileConstructor, int32_t i32Field__arg, std::string strField__arg, std::vector<int16_t> listField__arg, std::map<std::string, int32_t> mapField__arg) :
      i32Field(std::move(i32Field__arg)),
      strField(std::move(strField__arg)),
      listField(std::move(listField__arg)),
      mapField(std::move(mapField__arg)) {
    __isset.i32Field = true;
    __isset.strField = true;
    __isset.listField = true;
    __isset.mapField = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ModuleA(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ModuleA(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    i32Field = arg.move();
    __isset.i32Field = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ModuleA(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ModuleA(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    strField = arg.move();
    __isset.strField = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ModuleA(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ModuleA(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    listField = arg.move();
    __isset.listField = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ModuleA(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ModuleA(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    mapField = arg.move();
    __isset.mapField = true;
  }

  ModuleA(ModuleA&&) = default;

  ModuleA(const ModuleA&) = default;

  ModuleA& operator=(ModuleA&&) = default;

  ModuleA& operator=(const ModuleA&) = default;
  void __clear();

  virtual ~ModuleA() {}

  int32_t i32Field;
  std::string strField;
  std::vector<int16_t> listField;
  std::map<std::string, int32_t> mapField;

  struct __isset {
    void __clear() {
      i32Field = false;
      strField = false;
      listField = false;
      mapField = false;
    }

    bool i32Field = false;
    bool strField = false;
    bool listField = false;
    bool mapField = false;
  } __isset;
  bool operator==(const ModuleA& rhs) const;

  bool operator < (const ModuleA& rhs) const {
    if (!(i32Field == rhs.i32Field)) {
      return i32Field < rhs.i32Field;
    }
    if (!(strField == rhs.strField)) {
      return strField < rhs.strField;
    }
    if (!(listField == rhs.listField)) {
      return listField < rhs.listField;
    }
    if (!(mapField == rhs.mapField)) {
      return mapField < rhs.mapField;
    }
    (void)rhs;
    return false;
  }

  int32_t get_i32Field() const {
    return i32Field;
  }

  int32_t& set_i32Field(int32_t i32Field_) {
    i32Field = i32Field_;
    __isset.i32Field = true;
    return i32Field;
  }

  const std::string& get_strField() const& {
    return strField;
  }

  std::string get_strField() && {
    return std::move(strField);
  }

  template <typename T_ModuleA_strField_struct_setter>
  std::string& set_strField(T_ModuleA_strField_struct_setter&& strField_) {
    strField = std::forward<T_ModuleA_strField_struct_setter>(strField_);
    __isset.strField = true;
    return strField;
  }
  const std::vector<int16_t>& get_listField() const&;
  std::vector<int16_t> get_listField() &&;

  template <typename T_ModuleA_listField_struct_setter>
  std::vector<int16_t>& set_listField(T_ModuleA_listField_struct_setter&& listField_) {
    listField = std::forward<T_ModuleA_listField_struct_setter>(listField_);
    __isset.listField = true;
    return listField;
  }
  const std::map<std::string, int32_t>& get_mapField() const&;
  std::map<std::string, int32_t> get_mapField() &&;

  template <typename T_ModuleA_mapField_struct_setter>
  std::map<std::string, int32_t>& set_mapField(T_ModuleA_mapField_struct_setter&& mapField_) {
    mapField = std::forward<T_ModuleA_mapField_struct_setter>(mapField_);
    __isset.mapField = true;
    return mapField;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(ModuleA& a, ModuleA& b);
extern template uint32_t ModuleA::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ModuleA::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ModuleA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ModuleA::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ModuleA::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ModuleA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::some::ns::ModuleA>::clear( ::some::ns::ModuleA* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::some::ns::ModuleA>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleA>::write(Protocol* proto,  ::some::ns::ModuleA const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleA>::read(Protocol* proto,  ::some::ns::ModuleA* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleA>::serializedSize(Protocol const* proto,  ::some::ns::ModuleA const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleA>::serializedSizeZC(Protocol const* proto,  ::some::ns::ModuleA const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace some { namespace ns {
class ModuleB : private apache::thrift::detail::st::ComparisonOperators<ModuleB> {
 public:

  ModuleB() :
      i32Field(0) {}
  // FragileConstructor for use in initialization lists only

  ModuleB(apache::thrift::FragileConstructor, int32_t i32Field__arg) :
      i32Field(std::move(i32Field__arg)) {
    __isset.i32Field = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ModuleB(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ModuleB(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    i32Field = arg.move();
    __isset.i32Field = true;
  }

  ModuleB(ModuleB&&) = default;

  ModuleB(const ModuleB&) = default;

  ModuleB& operator=(ModuleB&&) = default;

  ModuleB& operator=(const ModuleB&) = default;
  void __clear();

  virtual ~ModuleB() {}

  int32_t i32Field;

  struct __isset {
    void __clear() {
      i32Field = false;
    }

    bool i32Field = false;
  } __isset;
  bool operator==(const ModuleB& rhs) const;

  bool operator < (const ModuleB& rhs) const {
    if (!(i32Field == rhs.i32Field)) {
      return i32Field < rhs.i32Field;
    }
    (void)rhs;
    return false;
  }

  int32_t get_i32Field() const {
    return i32Field;
  }

  int32_t& set_i32Field(int32_t i32Field_) {
    i32Field = i32Field_;
    __isset.i32Field = true;
    return i32Field;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(ModuleB& a, ModuleB& b);
extern template uint32_t ModuleB::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ModuleB::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ModuleB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ModuleB::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ModuleB::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ModuleB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::some::ns::ModuleB>::clear( ::some::ns::ModuleB* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::some::ns::ModuleB>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleB>::write(Protocol* proto,  ::some::ns::ModuleB const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleB>::read(Protocol* proto,  ::some::ns::ModuleB* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleB>::serializedSize(Protocol const* proto,  ::some::ns::ModuleB const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ModuleB>::serializedSizeZC(Protocol const* proto,  ::some::ns::ModuleB const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace some { namespace ns {
class ExceptionA : private apache::thrift::detail::st::ComparisonOperators<ExceptionA>, public apache::thrift::TException {
 public:

  ExceptionA() :
      code(0) {}
  // FragileConstructor for use in initialization lists only

  ExceptionA(apache::thrift::FragileConstructor, int32_t code__arg, std::string msg__arg) :
      code(std::move(code__arg)),
      msg(std::move(msg__arg)) {
    __isset.code = true;
    __isset.msg = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ExceptionA(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ExceptionA(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    code = arg.move();
    __isset.code = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ExceptionA(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ExceptionA(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    msg = arg.move();
    __isset.msg = true;
  }

  ExceptionA(ExceptionA&&) = default;

  ExceptionA(const ExceptionA&) = default;

  ExceptionA& operator=(ExceptionA&&) = default;

  ExceptionA& operator=(const ExceptionA&) = default;
  void __clear();

  virtual ~ExceptionA() {}

  int32_t code;
  std::string msg;

  struct __isset {
    void __clear() {
      code = false;
      msg = false;
    }

    bool code = false;
    bool msg = false;
  } __isset;
  bool operator==(const ExceptionA& rhs) const;

  bool operator < (const ExceptionA& rhs) const {
    if (!(code == rhs.code)) {
      return code < rhs.code;
    }
    if (!(msg == rhs.msg)) {
      return msg < rhs.msg;
    }
    (void)rhs;
    return false;
  }

  int32_t get_code() const {
    return code;
  }

  int32_t& set_code(int32_t code_) {
    code = code_;
    __isset.code = true;
    return code;
  }

  const std::string& get_msg() const& {
    return msg;
  }

  std::string get_msg() && {
    return std::move(msg);
  }

  template <typename T_ExceptionA_msg_struct_setter>
  std::string& set_msg(T_ExceptionA_msg_struct_setter&& msg_) {
    msg = std::forward<T_ExceptionA_msg_struct_setter>(msg_);
    __isset.msg = true;
    return msg;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  virtual const char* what() const noexcept {
    return " ::some::ns::ExceptionA";
  }

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(ExceptionA& a, ExceptionA& b);
extern template uint32_t ExceptionA::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ExceptionA::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ExceptionA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ExceptionA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ExceptionA::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ExceptionA::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ExceptionA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ExceptionA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::some::ns::ExceptionA>::clear( ::some::ns::ExceptionA* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::some::ns::ExceptionA>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ExceptionA>::write(Protocol* proto,  ::some::ns::ExceptionA const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ExceptionA>::read(Protocol* proto,  ::some::ns::ExceptionA* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ExceptionA>::serializedSize(Protocol const* proto,  ::some::ns::ExceptionA const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ExceptionA>::serializedSizeZC(Protocol const* proto,  ::some::ns::ExceptionA const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace some { namespace ns {
class ExceptionB : private apache::thrift::detail::st::ComparisonOperators<ExceptionB>, public apache::thrift::TException {
 public:

  ExceptionB() :
      code(0) {}
  // FragileConstructor for use in initialization lists only

  ExceptionB(apache::thrift::FragileConstructor, int32_t code__arg, std::string msg__arg) :
      code(std::move(code__arg)),
      msg(std::move(msg__arg)) {
    __isset.code = true;
    __isset.msg = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ExceptionB(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ExceptionB(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    code = arg.move();
    __isset.code = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  ExceptionB(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    ExceptionB(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    msg = arg.move();
    __isset.msg = true;
  }

  ExceptionB(ExceptionB&&) = default;

  ExceptionB(const ExceptionB&) = default;

  ExceptionB& operator=(ExceptionB&&) = default;

  ExceptionB& operator=(const ExceptionB&) = default;
  void __clear();

  virtual ~ExceptionB() {}

  int32_t code;
  std::string msg;

  struct __isset {
    void __clear() {
      code = false;
      msg = false;
    }

    bool code = false;
    bool msg = false;
  } __isset;
  bool operator==(const ExceptionB& rhs) const;

  bool operator < (const ExceptionB& rhs) const {
    if (!(code == rhs.code)) {
      return code < rhs.code;
    }
    if (!(msg == rhs.msg)) {
      return msg < rhs.msg;
    }
    (void)rhs;
    return false;
  }

  int32_t get_code() const {
    return code;
  }

  int32_t& set_code(int32_t code_) {
    code = code_;
    __isset.code = true;
    return code;
  }

  const std::string& get_msg() const& {
    return msg;
  }

  std::string get_msg() && {
    return std::move(msg);
  }

  template <typename T_ExceptionB_msg_struct_setter>
  std::string& set_msg(T_ExceptionB_msg_struct_setter&& msg_) {
    msg = std::forward<T_ExceptionB_msg_struct_setter>(msg_);
    __isset.msg = true;
    return msg;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  virtual const char* what() const noexcept {
    return " ::some::ns::ExceptionB";
  }

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(ExceptionB& a, ExceptionB& b);
extern template uint32_t ExceptionB::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t ExceptionB::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t ExceptionB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ExceptionB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t ExceptionB::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t ExceptionB::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t ExceptionB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t ExceptionB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::some::ns::ExceptionB>::clear( ::some::ns::ExceptionB* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::some::ns::ExceptionB>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ExceptionB>::write(Protocol* proto,  ::some::ns::ExceptionB const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ExceptionB>::read(Protocol* proto,  ::some::ns::ExceptionB* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ExceptionB>::serializedSize(Protocol const* proto,  ::some::ns::ExceptionB const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::ExceptionB>::serializedSizeZC(Protocol const* proto,  ::some::ns::ExceptionB const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
