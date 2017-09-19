/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp/Thrift.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/protocol/TProtocol.h>
#include <thrift/lib/cpp/transport/TTransport.h>

namespace apache { namespace thrift { namespace reflection {
class Schema;
}}}




enum Animal {
  DOG = 1,
  CAT = 2,
  TARANTULA = 3,
};

using _Animal_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Animal, int>;

extern const _Animal_EnumMapFactory::ValuesToNamesMapType _Animal_VALUES_TO_NAMES;

extern const _Animal_EnumMapFactory::NamesToValuesMapType _Animal_NAMES_TO_VALUES;


namespace apache { namespace thrift {
template <> struct TEnumDataStorage< ::Animal>;
template <> const std::size_t TEnumTraits< ::Animal>::size;
template <> const folly::Range<const  ::Animal*> TEnumTraits< ::Animal>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::Animal>::names;
template <> inline constexpr  ::Animal TEnumTraits< ::Animal>::min() {
return  ::Animal::DOG;
}
template <> inline constexpr  ::Animal TEnumTraits< ::Animal>::max() {
return  ::Animal::TARANTULA;
}
}} // apache::thrift



class Color;

class Vehicle;

class Person;

typedef int64_t PersonID;

void swap(Color &a, Color &b);

class Color : public apache::thrift::TStructType<Color> {
 public:

  static const uint64_t _reflection_id = 11194926431654439212U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  Color() : red(0), green(0), blue(0), alpha(0) {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Color(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Color(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    red = arg.move();
    __isset.red = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Color(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Color(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    green = arg.move();
    __isset.green = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Color(
    ::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Color(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    blue = arg.move();
    __isset.blue = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Color(
    ::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Color(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    alpha = arg.move();
    __isset.alpha = true;
  }

  Color(const Color&) = default;
  Color& operator=(const Color& src)= default;
  Color(Color&&) = default;
  Color& operator=(Color&&) = default;

  void __clear();

  virtual ~Color() noexcept {}

  double red;
  double green;
  double blue;
  double alpha;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      red = false;
      green = false;
      blue = false;
      alpha = false;
    }
    bool red;
    bool green;
    bool blue;
    bool alpha;
  } __isset;

  bool operator == (const Color &) const;
  bool operator != (const Color& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Color & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class Color;
void merge(const Color& from, Color& to);
void merge(Color&& from, Color& to);
void swap(Vehicle &a, Vehicle &b);

class Vehicle : public apache::thrift::TStructType<Vehicle> {
 public:

  static const uint64_t _reflection_id = 11029503283921871788U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  Vehicle() : hasAC(false) {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Vehicle(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Vehicle(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    color = arg.move();
    __isset.color = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Vehicle(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Vehicle(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    licensePlate = arg.move();
    __isset.licensePlate = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Vehicle(
    ::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Vehicle(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    description = arg.move();
    __isset.description = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Vehicle(
    ::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Vehicle(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    name = arg.move();
    __isset.name = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Vehicle(
    ::apache::thrift::detail::argument_wrapper<5, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Vehicle(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    hasAC = arg.move();
    __isset.hasAC = true;
  }

  Vehicle(const Vehicle&) = default;
  Vehicle& operator=(const Vehicle& src)= default;
  Vehicle(Vehicle&&) = default;
  Vehicle& operator=(Vehicle&&) = default;

  void __clear();

  virtual ~Vehicle() noexcept {}

  Color color;
  std::string licensePlate;
  std::string description;
  std::string name;
  bool hasAC;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      color = false;
      licensePlate = false;
      description = false;
      name = false;
      hasAC = false;
    }
    bool color;
    bool licensePlate;
    bool description;
    bool name;
    bool hasAC;
  } __isset;

  bool operator == (const Vehicle &) const;
  bool operator != (const Vehicle& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Vehicle & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class Vehicle;
void merge(const Vehicle& from, Vehicle& to);
void merge(Vehicle&& from, Vehicle& to);
void swap(Person &a, Person &b);

class Person : public apache::thrift::TStructType<Person> {
 public:

  static const uint64_t _reflection_id = 17004913262661492556U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  Person() : id(0), age(0), bestFriend(0), afraidOfAnimal(static_cast<Animal>(0)) {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Person(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    id = arg.move();
    __isset.id = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Person(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    name = arg.move();
    __isset.name = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Person(
    ::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    age = arg.move();
    __isset.age = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Person(
    ::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    address = arg.move();
    __isset.address = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Person(
    ::apache::thrift::detail::argument_wrapper<5, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    favoriteColor = arg.move();
    __isset.favoriteColor = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Person(
    ::apache::thrift::detail::argument_wrapper<6, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    friends = arg.move();
    __isset.friends = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Person(
    ::apache::thrift::detail::argument_wrapper<7, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    bestFriend = arg.move();
    __isset.bestFriend = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Person(
    ::apache::thrift::detail::argument_wrapper<8, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    petNames = arg.move();
    __isset.petNames = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Person(
    ::apache::thrift::detail::argument_wrapper<9, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    afraidOfAnimal = arg.move();
    __isset.afraidOfAnimal = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit Person(
    ::apache::thrift::detail::argument_wrapper<10, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    vehicles = arg.move();
    __isset.vehicles = true;
  }

  Person(const Person&) = default;
  Person& operator=(const Person& src)= default;
  Person(Person&&) = default;
  Person& operator=(Person&&) = default;

  void __clear();

  virtual ~Person() noexcept {}

  PersonID id;
  std::string name;
  int16_t age;
  std::string address;
  Color favoriteColor;
  std::set<PersonID>  friends;
  PersonID bestFriend;
  std::map<Animal, std::string>  petNames;
  Animal afraidOfAnimal;
  std::vector<Vehicle>  vehicles;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      id = false;
      name = false;
      age = false;
      address = false;
      favoriteColor = false;
      friends = false;
      bestFriend = false;
      petNames = false;
      afraidOfAnimal = false;
      vehicles = false;
    }
    bool id;
    bool name;
    bool age;
    bool address;
    bool favoriteColor;
    bool friends;
    bool bestFriend;
    bool petNames;
    bool afraidOfAnimal;
    bool vehicles;
  } __isset;

  bool operator == (const Person &) const;
  bool operator != (const Person& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Person & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class Person;
void merge(const Person& from, Person& to);
void merge(Person&& from, Person& to);


