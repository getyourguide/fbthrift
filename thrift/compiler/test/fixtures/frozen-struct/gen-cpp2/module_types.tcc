/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "src/gen-cpp2/module_types.h"

#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>

namespace some { namespace ns {

}} // some::ns
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace some { namespace ns {

template <class Protocol_>
uint32_t ModuleA::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->i32Field);
          this->__isset.i32Field = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->strField);
          this->__isset.strField = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 3:
      {
        if (_ftype == apache::thrift::protocol::T_LIST) {
          this->listField = std::vector<int16_t>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int16_t>>::read(*iprot, this->listField);
          this->__isset.listField = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 4:
      {
        if (_ftype == apache::thrift::protocol::T_MAP) {
          this->mapField = std::map<std::string, int32_t>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, int32_t>>::read(*iprot, this->mapField);
          this->__isset.mapField = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 5:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedA>::read(iprot, &this->inclAField);
          this->__isset.inclAField = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 6:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedB>::read(iprot, &this->inclBField);
          this->__isset.inclBField = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t ModuleA::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleA");
  xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->i32Field);
  xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->strField);
  xfer += prot_->serializedFieldSize("listField", apache::thrift::protocol::T_LIST, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int16_t>>::serializedSize<false>(*prot_, this->listField);
  xfer += prot_->serializedFieldSize("mapField", apache::thrift::protocol::T_MAP, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, int32_t>>::serializedSize<false>(*prot_, this->mapField);
  xfer += prot_->serializedFieldSize("inclAField", apache::thrift::protocol::T_STRUCT, 5);
  xfer += ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedA>::serializedSize(prot_, &this->inclAField);
  xfer += prot_->serializedFieldSize("inclBField", apache::thrift::protocol::T_STRUCT, 6);
  xfer += ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedB>::serializedSize(prot_, &this->inclBField);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleA::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleA");
  xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->i32Field);
  xfer += prot_->serializedFieldSize("strField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->strField);
  xfer += prot_->serializedFieldSize("listField", apache::thrift::protocol::T_LIST, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int16_t>>::serializedSize<false>(*prot_, this->listField);
  xfer += prot_->serializedFieldSize("mapField", apache::thrift::protocol::T_MAP, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, int32_t>>::serializedSize<false>(*prot_, this->mapField);
  xfer += prot_->serializedFieldSize("inclAField", apache::thrift::protocol::T_STRUCT, 5);
  xfer += ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedA>::serializedSizeZC(prot_, &this->inclAField);
  xfer += prot_->serializedFieldSize("inclBField", apache::thrift::protocol::T_STRUCT, 6);
  xfer += ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedB>::serializedSizeZC(prot_, &this->inclBField);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleA::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ModuleA");
  xfer += prot_->writeFieldBegin("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->i32Field);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("strField", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->strField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("listField", apache::thrift::protocol::T_LIST, 3);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int16_t>>::write(*prot_, this->listField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("mapField", apache::thrift::protocol::T_MAP, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::map<std::string, int32_t>>::write(*prot_, this->mapField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("inclAField", apache::thrift::protocol::T_STRUCT, 5);
  xfer += ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedA>::write(prot_, &this->inclAField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("inclBField", apache::thrift::protocol::T_STRUCT, 6);
  xfer += ::apache::thrift::Cpp2Ops<  ::some::ns::IncludedB>::write(prot_, &this->inclBField);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // some::ns
namespace some { namespace ns {

template <class Protocol_>
uint32_t ModuleB::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      this->translateFieldName(_fname, fid, _ftype);
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->i32Field);
          this->__isset.i32Field = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::some::ns::EnumB>::read(*iprot, this->inclEnumB);
          this->__isset.inclEnumB = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t ModuleB::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleB");
  xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->i32Field);
  xfer += prot_->serializedFieldSize("inclEnumB", apache::thrift::protocol::T_I32, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::some::ns::EnumB>::serializedSize<false>(*prot_, this->inclEnumB);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleB::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ModuleB");
  xfer += prot_->serializedFieldSize("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->i32Field);
  xfer += prot_->serializedFieldSize("inclEnumB", apache::thrift::protocol::T_I32, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::some::ns::EnumB>::serializedSize<false>(*prot_, this->inclEnumB);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ModuleB::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ModuleB");
  xfer += prot_->writeFieldBegin("i32Field", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->i32Field);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("inclEnumB", apache::thrift::protocol::T_I32, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::some::ns::EnumB>::write(*prot_, this->inclEnumB);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // some::ns
