/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/optionals/gen-cpp/module_types.h"
#include "thrift/compiler/test/fixtures/optionals/gen-cpp/module_data.h"

#include "thrift/compiler/test/fixtures/optionals/gen-cpp/module_reflection.h"

#include <algorithm>
#include <string.h>

#include <folly/Indestructible.h>



const typename _Animal_EnumMapFactory::ValuesToNamesMapType _Animal_VALUES_TO_NAMES = _Animal_EnumMapFactory::makeValuesToNamesMap();

const typename _Animal_EnumMapFactory::NamesToValuesMapType _Animal_NAMES_TO_VALUES = _Animal_EnumMapFactory::makeNamesToValuesMap();


namespace apache { namespace thrift {
template <>const std::size_t TEnumTraits< ::Animal>::size = 3;
template <>const folly::Range<const  ::Animal*> TEnumTraits< ::Animal>::values = folly::range( ::_AnimalEnumDataStorage::values);
template <>const folly::Range<const folly::StringPiece*> TEnumTraits< ::Animal>::names = folly::range( ::_AnimalEnumDataStorage::names);

template<>
const char* TEnumTraits< ::Animal>::findName( ::Animal value) {
  static const auto map = folly::Indestructible< ::_Animal_EnumMapFactory::ValuesToNamesMapType>{ ::_Animal_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template<>
bool TEnumTraits< ::Animal>::findValue(const char* name,  ::Animal* out) {
  static const auto map = folly::Indestructible< ::_Animal_EnumMapFactory::NamesToValuesMapType>{ ::_Animal_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, out);
}
}} // apache::thrift


const uint64_t Color::_reflection_id;
void Color::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::module_reflection_::reflectionInitializer_11194926431654439212(schema);
}

bool Color::operator == (const Color & rhs) const {
  if (!(this->red == rhs.red))
    return false;
  if (!(this->green == rhs.green))
    return false;
  if (!(this->blue == rhs.blue))
    return false;
  if (!(this->alpha == rhs.alpha))
    return false;
  return true;
}

void Color::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "red") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_DOUBLE;
  }
  else if (_fname == "green") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_DOUBLE;
  }
  else if (_fname == "blue") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_DOUBLE;
  }
  else if (_fname == "alpha") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_DOUBLE;
  }
};

uint32_t Color::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::module_reflection_::reflectionInitializer_11194926431654439212(*schema);
    iprot->setNextStructType(Color::_reflection_id);
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
        if (_ftype == apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->red);
          this->__isset.red = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->green);
          this->__isset.green = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 3:
        if (_ftype == apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->blue);
          this->__isset.blue = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 4:
        if (_ftype == apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->alpha);
          this->__isset.alpha = true;
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

void Color::__clear() {
  red = 0;
  green = 0;
  blue = 0;
  alpha = 0;
  __isset.__clear();
}
uint32_t Color::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Color");
  xfer += oprot->writeFieldBegin("red", apache::thrift::protocol::T_DOUBLE, 1);
  xfer += oprot->writeDouble(this->red);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("green", apache::thrift::protocol::T_DOUBLE, 2);
  xfer += oprot->writeDouble(this->green);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("blue", apache::thrift::protocol::T_DOUBLE, 3);
  xfer += oprot->writeDouble(this->blue);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("alpha", apache::thrift::protocol::T_DOUBLE, 4);
  xfer += oprot->writeDouble(this->alpha);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Color &a, Color &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.red, b.red);
  swap(a.green, b.green);
  swap(a.blue, b.blue);
  swap(a.alpha, b.alpha);
  swap(a.__isset, b.__isset);
}

void merge(const Color& from, Color& to) {
  using apache::thrift::merge;
  merge(from.red, to.red);
  to.__isset.red = to.__isset.red || from.__isset.red;
  merge(from.green, to.green);
  to.__isset.green = to.__isset.green || from.__isset.green;
  merge(from.blue, to.blue);
  to.__isset.blue = to.__isset.blue || from.__isset.blue;
  merge(from.alpha, to.alpha);
  to.__isset.alpha = to.__isset.alpha || from.__isset.alpha;
}

void merge(Color&& from, Color& to) {
  using apache::thrift::merge;
  merge(std::move(from.red), to.red);
  to.__isset.red = to.__isset.red || from.__isset.red;
  merge(std::move(from.green), to.green);
  to.__isset.green = to.__isset.green || from.__isset.green;
  merge(std::move(from.blue), to.blue);
  to.__isset.blue = to.__isset.blue || from.__isset.blue;
  merge(std::move(from.alpha), to.alpha);
  to.__isset.alpha = to.__isset.alpha || from.__isset.alpha;
}

const uint64_t Vehicle::_reflection_id;
void Vehicle::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::module_reflection_::reflectionInitializer_11029503283921871788(schema);
}

bool Vehicle::operator == (const Vehicle & rhs) const {
  if (!(this->color == rhs.color))
    return false;
  if (__isset.licensePlate != rhs.__isset.licensePlate)
    return false;
  else if (__isset.licensePlate && !(licensePlate == rhs.licensePlate))
    return false;
  if (__isset.description != rhs.__isset.description)
    return false;
  else if (__isset.description && !(description == rhs.description))
    return false;
  if (__isset.name != rhs.__isset.name)
    return false;
  else if (__isset.name && !(name == rhs.name))
    return false;
  if (__isset.hasAC != rhs.__isset.hasAC)
    return false;
  else if (__isset.hasAC && !(hasAC == rhs.hasAC))
    return false;
  return true;
}

void Vehicle::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "color") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "licensePlate") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "description") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "name") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "hasAC") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
};

uint32_t Vehicle::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::module_reflection_::reflectionInitializer_11029503283921871788(*schema);
    iprot->setNextStructType(Vehicle::_reflection_id);
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
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += this->color.read(iprot);
          this->__isset.color = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->licensePlate);
          this->__isset.licensePlate = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 3:
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->description);
          this->__isset.description = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 4:
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 5:
        if (_ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->hasAC);
          this->__isset.hasAC = true;
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

void Vehicle::__clear() {
  color.__clear();
  licensePlate = "";
  description = "";
  name = "";
  hasAC = false;
  __isset.__clear();
}
uint32_t Vehicle::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Vehicle");
  xfer += oprot->writeFieldBegin("color", apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->color.write(oprot);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.licensePlate) {
    xfer += oprot->writeFieldBegin("licensePlate", apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->licensePlate);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.description) {
    xfer += oprot->writeFieldBegin("description", apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->description);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.name) {
    xfer += oprot->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->name);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.hasAC) {
    xfer += oprot->writeFieldBegin("hasAC", apache::thrift::protocol::T_BOOL, 5);
    xfer += oprot->writeBool(this->hasAC);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Vehicle &a, Vehicle &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.color, b.color);
  swap(a.licensePlate, b.licensePlate);
  swap(a.description, b.description);
  swap(a.name, b.name);
  swap(a.hasAC, b.hasAC);
  swap(a.__isset, b.__isset);
}

void merge(const Vehicle& from, Vehicle& to) {
  using apache::thrift::merge;
  merge(from.color, to.color);
  to.__isset.color = to.__isset.color || from.__isset.color;
  if (from.__isset.licensePlate) {
    merge(from.licensePlate, to.licensePlate);
    to.__isset.licensePlate = true;
  }
  if (from.__isset.description) {
    merge(from.description, to.description);
    to.__isset.description = true;
  }
  if (from.__isset.name) {
    merge(from.name, to.name);
    to.__isset.name = true;
  }
  if (from.__isset.hasAC) {
    merge(from.hasAC, to.hasAC);
    to.__isset.hasAC = true;
  }
}

void merge(Vehicle&& from, Vehicle& to) {
  using apache::thrift::merge;
  merge(std::move(from.color), to.color);
  to.__isset.color = to.__isset.color || from.__isset.color;
  if (from.__isset.licensePlate) {
    merge(std::move(from.licensePlate), to.licensePlate);
    to.__isset.licensePlate = true;
  }
  if (from.__isset.description) {
    merge(std::move(from.description), to.description);
    to.__isset.description = true;
  }
  if (from.__isset.name) {
    merge(std::move(from.name), to.name);
    to.__isset.name = true;
  }
  if (from.__isset.hasAC) {
    merge(std::move(from.hasAC), to.hasAC);
    to.__isset.hasAC = true;
  }
}

const uint64_t Person::_reflection_id;
void Person::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::module_reflection_::reflectionInitializer_17004913262661492556(schema);
}

bool Person::operator == (const Person & rhs) const {
  if (!(this->id == rhs.id))
    return false;
  if (!(this->name == rhs.name))
    return false;
  if (__isset.age != rhs.__isset.age)
    return false;
  else if (__isset.age && !(age == rhs.age))
    return false;
  if (__isset.address != rhs.__isset.address)
    return false;
  else if (__isset.address && !(address == rhs.address))
    return false;
  if (__isset.favoriteColor != rhs.__isset.favoriteColor)
    return false;
  else if (__isset.favoriteColor && !(favoriteColor == rhs.favoriteColor))
    return false;
  if (__isset.friends != rhs.__isset.friends)
    return false;
  else if (__isset.friends && !(friends == rhs.friends))
    return false;
  if (__isset.bestFriend != rhs.__isset.bestFriend)
    return false;
  else if (__isset.bestFriend && !(bestFriend == rhs.bestFriend))
    return false;
  if (__isset.petNames != rhs.__isset.petNames)
    return false;
  else if (__isset.petNames && !(petNames == rhs.petNames))
    return false;
  if (__isset.afraidOfAnimal != rhs.__isset.afraidOfAnimal)
    return false;
  else if (__isset.afraidOfAnimal && !(afraidOfAnimal == rhs.afraidOfAnimal))
    return false;
  if (__isset.vehicles != rhs.__isset.vehicles)
    return false;
  else if (__isset.vehicles && !(vehicles == rhs.vehicles))
    return false;
  return true;
}

void Person::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "id") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_I64;
  }
  else if (_fname == "name") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "age") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_I16;
  }
  else if (_fname == "address") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "favoriteColor") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "friends") {
    fid = 6;
    _ftype = apache::thrift::protocol::T_SET;
  }
  else if (_fname == "bestFriend") {
    fid = 7;
    _ftype = apache::thrift::protocol::T_I64;
  }
  else if (_fname == "petNames") {
    fid = 8;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "afraidOfAnimal") {
    fid = 9;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "vehicles") {
    fid = 10;
    _ftype = apache::thrift::protocol::T_LIST;
  }
};

uint32_t Person::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::module_reflection_::reflectionInitializer_17004913262661492556(*schema);
    iprot->setNextStructType(Person::_reflection_id);
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
        if (_ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 3:
        if (_ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->age);
          this->__isset.age = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 4:
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->address);
          this->__isset.address = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 5:
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += this->favoriteColor.read(iprot);
          this->__isset.favoriteColor = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 6:
        if (_ftype == apache::thrift::protocol::T_SET) {
          {
            this->friends.clear();
            uint32_t _size3;
            bool _sizeUnknown4;
            apache::thrift::protocol::TType _etype7;
            xfer += iprot->readSetBegin(_etype7, _size3, _sizeUnknown4);
            if (!_sizeUnknown4) {
              uint32_t _i9;
              for (_i9 = 0; _i9 < _size3; ++_i9)
              {
                PersonID _elem10;
                xfer += iprot->readI64(_elem10);
                this->friends.insert(_elem10);
              }
            } else {
              while (iprot->peekSet())
              {
                PersonID _elem11;
                xfer += iprot->readI64(_elem11);
                this->friends.insert(_elem11);
              }
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.friends = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 7:
        if (_ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->bestFriend);
          this->__isset.bestFriend = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 8:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->petNames.clear();
            uint32_t _size12;
            bool _sizeUnknown13;
            apache::thrift::protocol::TType _ktype14;
            apache::thrift::protocol::TType _vtype15;
            xfer += iprot->readMapBegin(_ktype14, _vtype15, _size12, _sizeUnknown13);
            if (!_sizeUnknown13) {
              uint32_t _i18;
              for (_i18 = 0; _i18 < _size12; ++_i18)
              {
                Animal _key19;
                int32_t ecast21;
                xfer += iprot->readI32(ecast21);
                _key19 = (Animal)ecast21;
                std::string& _val20 = this->petNames[_key19];
                xfer += iprot->readString(_val20);
              }
            } else {
              while (iprot->peekMap())
              {
                Animal _key22;
                int32_t ecast24;
                xfer += iprot->readI32(ecast24);
                _key22 = (Animal)ecast24;
                std::string& _val23 = this->petNames[_key22];
                xfer += iprot->readString(_val23);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.petNames = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 9:
        if (_ftype == apache::thrift::protocol::T_I32) {
          int32_t ecast25;
          xfer += iprot->readI32(ecast25);
          this->afraidOfAnimal = (Animal)ecast25;
          this->__isset.afraidOfAnimal = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 10:
        if (_ftype == apache::thrift::protocol::T_LIST) {
          {
            this->vehicles.clear();
            uint32_t _size26;
            bool _sizeUnknown27;
            apache::thrift::protocol::TType _etype30;
            xfer += iprot->readListBegin(_etype30, _size26, _sizeUnknown27);
            if (!_sizeUnknown27) {
              this->vehicles.resize(_size26);
              uint32_t _i32;
              for (_i32 = 0; _i32 < _size26; ++_i32)
              {
                xfer += this->vehicles[_i32].read(iprot);
              }
            } else {
              while (iprot->peekList())
              {
                Vehicle _elem33;
                xfer += _elem33.read(iprot);
                this->vehicles.push_back(_elem33);
              }
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.vehicles = true;
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

void Person::__clear() {
  id = 0;
  name = "";
  age = 0;
  address = "";
  favoriteColor.__clear();
  friends.clear();
  bestFriend = 0;
  petNames.clear();
  afraidOfAnimal = static_cast<Animal>(0);
  vehicles.clear();
  __isset.__clear();
}
uint32_t Person::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Person");
  xfer += oprot->writeFieldBegin("id", apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->id);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.age) {
    xfer += oprot->writeFieldBegin("age", apache::thrift::protocol::T_I16, 3);
    xfer += oprot->writeI16(this->age);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.address) {
    xfer += oprot->writeFieldBegin("address", apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->address);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.favoriteColor) {
    xfer += oprot->writeFieldBegin("favoriteColor", apache::thrift::protocol::T_STRUCT, 5);
    xfer += this->favoriteColor.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.friends) {
    xfer += oprot->writeFieldBegin("friends", apache::thrift::protocol::T_SET, 6);
    {
      xfer += oprot->writeSetBegin(apache::thrift::protocol::T_I64, this->friends.size());
      std::set<PersonID> ::const_iterator _iter34;
      for (_iter34 = this->friends.begin(); _iter34 != this->friends.end(); ++_iter34)
      {
        xfer += oprot->writeI64((*_iter34));
      }
      xfer += oprot->writeSetEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.bestFriend) {
    xfer += oprot->writeFieldBegin("bestFriend", apache::thrift::protocol::T_I64, 7);
    xfer += oprot->writeI64(this->bestFriend);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.petNames) {
    xfer += oprot->writeFieldBegin("petNames", apache::thrift::protocol::T_MAP, 8);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I32, apache::thrift::protocol::T_STRING, this->petNames.size());
      std::map<Animal, std::string> ::const_iterator _iter35;
      for (_iter35 = this->petNames.begin(); _iter35 != this->petNames.end(); ++_iter35)
      {
        xfer += oprot->writeI32((int32_t)_iter35->first);
        xfer += oprot->writeString(_iter35->second);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.afraidOfAnimal) {
    xfer += oprot->writeFieldBegin("afraidOfAnimal", apache::thrift::protocol::T_I32, 9);
    xfer += oprot->writeI32((int32_t)this->afraidOfAnimal);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.vehicles) {
    xfer += oprot->writeFieldBegin("vehicles", apache::thrift::protocol::T_LIST, 10);
    {
      xfer += oprot->writeListBegin(apache::thrift::protocol::T_STRUCT, this->vehicles.size());
      std::vector<Vehicle> ::const_iterator _iter36;
      for (_iter36 = this->vehicles.begin(); _iter36 != this->vehicles.end(); ++_iter36)
      {
        xfer += (*_iter36).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Person &a, Person &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.id, b.id);
  swap(a.name, b.name);
  swap(a.age, b.age);
  swap(a.address, b.address);
  swap(a.favoriteColor, b.favoriteColor);
  swap(a.friends, b.friends);
  swap(a.bestFriend, b.bestFriend);
  swap(a.petNames, b.petNames);
  swap(a.afraidOfAnimal, b.afraidOfAnimal);
  swap(a.vehicles, b.vehicles);
  swap(a.__isset, b.__isset);
}

void merge(const Person& from, Person& to) {
  using apache::thrift::merge;
  merge(from.id, to.id);
  to.__isset.id = to.__isset.id || from.__isset.id;
  merge(from.name, to.name);
  to.__isset.name = to.__isset.name || from.__isset.name;
  if (from.__isset.age) {
    merge(from.age, to.age);
    to.__isset.age = true;
  }
  if (from.__isset.address) {
    merge(from.address, to.address);
    to.__isset.address = true;
  }
  if (from.__isset.favoriteColor) {
    merge(from.favoriteColor, to.favoriteColor);
    to.__isset.favoriteColor = true;
  }
  if (from.__isset.friends) {
    merge(from.friends, to.friends);
    to.__isset.friends = true;
  }
  if (from.__isset.bestFriend) {
    merge(from.bestFriend, to.bestFriend);
    to.__isset.bestFriend = true;
  }
  if (from.__isset.petNames) {
    merge(from.petNames, to.petNames);
    to.__isset.petNames = true;
  }
  if (from.__isset.afraidOfAnimal) {
    merge(from.afraidOfAnimal, to.afraidOfAnimal);
    to.__isset.afraidOfAnimal = true;
  }
  if (from.__isset.vehicles) {
    merge(from.vehicles, to.vehicles);
    to.__isset.vehicles = true;
  }
}

void merge(Person&& from, Person& to) {
  using apache::thrift::merge;
  merge(std::move(from.id), to.id);
  to.__isset.id = to.__isset.id || from.__isset.id;
  merge(std::move(from.name), to.name);
  to.__isset.name = to.__isset.name || from.__isset.name;
  if (from.__isset.age) {
    merge(std::move(from.age), to.age);
    to.__isset.age = true;
  }
  if (from.__isset.address) {
    merge(std::move(from.address), to.address);
    to.__isset.address = true;
  }
  if (from.__isset.favoriteColor) {
    merge(std::move(from.favoriteColor), to.favoriteColor);
    to.__isset.favoriteColor = true;
  }
  if (from.__isset.friends) {
    merge(std::move(from.friends), to.friends);
    to.__isset.friends = true;
  }
  if (from.__isset.bestFriend) {
    merge(std::move(from.bestFriend), to.bestFriend);
    to.__isset.bestFriend = true;
  }
  if (from.__isset.petNames) {
    merge(std::move(from.petNames), to.petNames);
    to.__isset.petNames = true;
  }
  if (from.__isset.afraidOfAnimal) {
    merge(std::move(from.afraidOfAnimal), to.afraidOfAnimal);
    to.__isset.afraidOfAnimal = true;
  }
  if (from.__isset.vehicles) {
    merge(std::move(from.vehicles), to.vehicles);
    to.__isset.vehicles = true;
  }
}


