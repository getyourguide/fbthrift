/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/qualified/gen-cpp/module1_types.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp/module1_data.h"

#include "thrift/compiler/test/fixtures/qualified/gen-cpp/module1_reflection.h"

#include <algorithm>
#include <string.h>

#include <folly/Indestructible.h>

namespace MODULE1 {

const typename _Enum_EnumMapFactory::ValuesToNamesMapType _Enum_VALUES_TO_NAMES = _Enum_EnumMapFactory::makeValuesToNamesMap();

const typename _Enum_EnumMapFactory::NamesToValuesMapType _Enum_NAMES_TO_VALUES = _Enum_EnumMapFactory::makeNamesToValuesMap();

} // namespace
namespace apache { namespace thrift {
template <>const std::size_t TEnumTraits< ::MODULE1::Enum>::size = 3;
template <>const folly::Range<const  ::MODULE1::Enum*> TEnumTraits< ::MODULE1::Enum>::values = folly::range( ::MODULE1::_EnumEnumDataStorage::values);
template <>const folly::Range<const folly::StringPiece*> TEnumTraits< ::MODULE1::Enum>::names = folly::range( ::MODULE1::_EnumEnumDataStorage::names);

template<>
const char* TEnumTraits< ::MODULE1::Enum>::findName( ::MODULE1::Enum value) {
  static const auto map = folly::Indestructible< ::MODULE1::_Enum_EnumMapFactory::ValuesToNamesMapType>{ ::MODULE1::_Enum_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template<>
bool TEnumTraits< ::MODULE1::Enum>::findValue(const char* name,  ::MODULE1::Enum* out) {
  static const auto map = folly::Indestructible< ::MODULE1::_Enum_EnumMapFactory::NamesToValuesMapType>{ ::MODULE1::_Enum_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, out);
}
}} // apache::thrift

namespace MODULE1 {
const uint64_t Struct::_reflection_id;
void Struct::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::MODULE1::module1_reflection_::reflectionInitializer_18368202441649123916(schema);
}

bool Struct::operator == (const Struct & rhs) const {
  if (!(this->first == rhs.first))
    return false;
  if (!(this->second == rhs.second))
    return false;
  return true;
}

void Struct::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "first") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "second") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
};

uint32_t Struct::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::MODULE1::module1_reflection_::reflectionInitializer_18368202441649123916(*schema);
    iprot->setNextStructType(Struct::_reflection_id);
  }
  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->first);
          this->__isset.first = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->second);
          this->__isset.second = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void Struct::__clear() {
  first = 0;
  second = "";
  __isset.__clear();
}
uint32_t Struct::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Struct");
  xfer += oprot->writeFieldBegin("first", apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->first);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("second", apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->second);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Struct &a, Struct &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.first, b.first);
  swap(a.second, b.second);
  swap(a.__isset, b.__isset);
}

void merge(const Struct& from, Struct& to) {
  using apache::thrift::merge;
  merge(from.first, to.first);
  to.__isset.first = to.__isset.first || from.__isset.first;
  merge(from.second, to.second);
  to.__isset.second = to.__isset.second || from.__isset.second;
}

void merge(Struct&& from, Struct& to) {
  using apache::thrift::merge;
  merge(std::move(from.first), to.first);
  to.__isset.first = to.__isset.first || from.__isset.first;
  merge(std::move(from.second), to.second);
  to.__isset.second = to.__isset.second || from.__isset.second;
}

} // namespace
