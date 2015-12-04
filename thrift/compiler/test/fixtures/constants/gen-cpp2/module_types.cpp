/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "module_types.h"

#include "module_types.tcc"

#include <algorithm>

namespace cpp2 {

City _kCityValues[] = {
  City::NYC,
  City::MPK,
  City::SEA,
  City::LON
};

const char* _kCityNames[] = {
  "NYC",
  "MPK",
  "SEA",
  "LON"
};

const std::map<City, const char*> _City_VALUES_TO_NAMES(apache::thrift::TEnumIterator<City>(4, _kCityValues, _kCityNames), apache::thrift::TEnumIterator<City>(-1, nullptr, nullptr));
const std::map<const char*, City, apache::thrift::ltstr> _City_NAMES_TO_VALUES(apache::thrift::TEnumInverseIterator<City>(4, _kCityValues, _kCityNames), apache::thrift::TEnumInverseIterator<City>(-1, nullptr, nullptr));

} // cpp2
namespace apache { namespace thrift {

template <> const char* TEnumTraitsBase< ::cpp2::City>::findName( ::cpp2::City value) {
  return findName( ::cpp2::_City_VALUES_TO_NAMES, value);
}

template <> bool TEnumTraitsBase< ::cpp2::City>::findValue(const char* name,  ::cpp2::City* outValue) {
  return findValue( ::cpp2::_City_NAMES_TO_VALUES, name, outValue);
}

}} // apache::thrift
namespace cpp2 {

Company _kCompanyValues[] = {
  Company::FACEBOOK,
  Company::WHATSAPP,
  Company::OCULUS,
  Company::INSTAGRAM
};

const char* _kCompanyNames[] = {
  "FACEBOOK",
  "WHATSAPP",
  "OCULUS",
  "INSTAGRAM"
};

const std::map<Company, const char*> _Company_VALUES_TO_NAMES(apache::thrift::TEnumIterator<Company>(4, _kCompanyValues, _kCompanyNames), apache::thrift::TEnumIterator<Company>(-1, nullptr, nullptr));
const std::map<const char*, Company, apache::thrift::ltstr> _Company_NAMES_TO_VALUES(apache::thrift::TEnumInverseIterator<Company>(4, _kCompanyValues, _kCompanyNames), apache::thrift::TEnumInverseIterator<Company>(-1, nullptr, nullptr));

} // cpp2
namespace apache { namespace thrift {

template <> const char* TEnumTraitsBase< ::cpp2::Company>::findName( ::cpp2::Company value) {
  return findName( ::cpp2::_Company_VALUES_TO_NAMES, value);
}

template <> bool TEnumTraitsBase< ::cpp2::Company>::findValue(const char* name,  ::cpp2::Company* outValue) {
  return findValue( ::cpp2::_Company_NAMES_TO_VALUES, name, outValue);
}

}} // apache::thrift
namespace cpp2 {

template uint32_t Internship::read<apache::thrift::BinaryProtocolReader>(apache::thrift::BinaryProtocolReader*);
template uint32_t Internship::write<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Internship::serializedSize<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Internship::serializedSizeZC<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Internship::read<apache::thrift::CompactProtocolReader>(apache::thrift::CompactProtocolReader*);
template uint32_t Internship::write<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Internship::serializedSize<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Internship::serializedSizeZC<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;

void Internship::__clear() {
  weeks = 0;
  title = std::string();
  employer =  ::cpp2::Company();
  __isset.__clear();
}

bool Internship::operator==(const Internship& rhs) const {
  if (!((weeks == rhs.weeks))) {
    return false;
  }
  if (!((title == rhs.title))) {
    return false;
  }
  if (__isset.employer != rhs.__isset.employer) {
    return false;
  }
  else if (__isset.employer && !((employer == rhs.employer))) {
    return false;
  }
  return true;
}

void swap(Internship& a, Internship& b) {
  using ::std::swap;
  swap(a.weeks, b.weeks);
  swap(a.title, b.title);
  swap(a.employer, b.employer);
  swap(a.__isset, b.__isset);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template uint32_t Range::read<apache::thrift::BinaryProtocolReader>(apache::thrift::BinaryProtocolReader*);
template uint32_t Range::write<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Range::serializedSize<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Range::serializedSizeZC<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Range::read<apache::thrift::CompactProtocolReader>(apache::thrift::CompactProtocolReader*);
template uint32_t Range::write<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Range::serializedSize<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Range::serializedSizeZC<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;

void Range::__clear() {
  min = 0;
  max = 0;
}

bool Range::operator==(const Range& rhs) const {
  if (!((min == rhs.min))) {
    return false;
  }
  if (!((max == rhs.max))) {
    return false;
  }
  return true;
}

void swap(Range& a, Range& b) {
  using ::std::swap;
  swap(a.min, b.min);
  swap(a.max, b.max);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2