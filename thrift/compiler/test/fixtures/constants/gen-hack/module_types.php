<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift enum:-
 * EmptyEnum
 */
enum EmptyEnum : int {
}
type EmptyEnumType = EmptyEnum;

/**
 * Original thrift enum:-
 * City
 */
enum City : int {
  NYC = 0;
  MPK = 1;
  SEA = 2;
  LON = 3;
}
type CityType = City;

/**
 * Original thrift enum:-
 * Company
 */
enum Company : int {
  FACEBOOK = 0;
  WHATSAPP = 1;
  OCULUS = 2;
  INSTAGRAM = 3;
}
type CompanyType = Company;

/**
 * Original thrift struct:-
 * Internship
 */
class Internship implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static array $_TSPEC = array(
    1 => array(
      'var' => 'weeks',
      'type' => \TType::I32,
      ),
    2 => array(
      'var' => 'title',
      'type' => \TType::STRING,
      ),
    3 => array(
      'var' => 'employer',
      'type' => \TType::I32,
      'enum' => 'Company',
      ),
    );
  public static Map<string, int> $_TFIELDMAP = Map {
    'weeks' => 1,
    'title' => 2,
    'employer' => 3,
  };
  const int STRUCTURAL_ID = 749038867953722654;
  /**
   * Original thrift field:-
   * 1: i32 weeks
   */
  public int $weeks;
  /**
   * Original thrift field:-
   * 2: string title
   */
  public string $title;
  /**
   * Original thrift field:-
   * 3: enum module.Company employer
   */
  public ?Company $employer;

  public function __construct(?int $weeks = null, ?string $title = null, ?Company $employer = null  ) {
    if ($weeks === null) {
      $this->weeks = 0;
    } else {
      $this->weeks = $weeks;
    }
    if ($title === null) {
      $this->title = '';
    } else {
      $this->title = $title;
    }
    $this->employer = $employer;
  }

  public function getName(): string {
    return 'Internship';
  }

}

/**
 * Original thrift struct:-
 * UnEnumStruct
 */
class UnEnumStruct implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static array $_TSPEC = array(
    1 => array(
      'var' => 'city',
      'type' => \TType::I32,
      'enum' => 'City',
      ),
    );
  public static Map<string, int> $_TFIELDMAP = Map {
    'city' => 1,
  };
  const int STRUCTURAL_ID = 8709689501091584749;
  /**
   * Original thrift field:-
   * 1: enum module.City city
   */
  public ?City $city;

  public function __construct(?City $city = null  ) {
    if ($city === null) {
      $this->city = City::coerce(-1);
    } else {
      $this->city = $city;
    }
  }

  public function getName(): string {
    return 'UnEnumStruct';
  }

}

/**
 * Original thrift struct:-
 * Range
 */
class Range implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static array $_TSPEC = array(
    1 => array(
      'var' => 'min',
      'type' => \TType::I32,
      ),
    2 => array(
      'var' => 'max',
      'type' => \TType::I32,
      ),
    );
  public static Map<string, int> $_TFIELDMAP = Map {
    'min' => 1,
    'max' => 2,
  };
  const int STRUCTURAL_ID = 6850388386457434767;
  /**
   * Original thrift field:-
   * 1: i32 min
   */
  public int $min;
  /**
   * Original thrift field:-
   * 2: i32 max
   */
  public int $max;

  public function __construct(?int $min = null, ?int $max = null  ) {
    if ($min === null) {
      $this->min = 0;
    } else {
      $this->min = $min;
    }
    if ($max === null) {
      $this->max = 0;
    } else {
      $this->max = $max;
    }
  }

  public function getName(): string {
    return 'Range';
  }

}

/**
 * Original thrift struct:-
 * struct1
 */
class struct1 implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static array $_TSPEC = array(
    1 => array(
      'var' => 'a',
      'type' => \TType::I32,
      ),
    2 => array(
      'var' => 'b',
      'type' => \TType::STRING,
      ),
    );
  public static Map<string, int> $_TFIELDMAP = Map {
    'a' => 1,
    'b' => 2,
  };
  const int STRUCTURAL_ID = 7783381726179123112;
  /**
   * Original thrift field:-
   * 1: i32 a
   */
  public int $a;
  /**
   * Original thrift field:-
   * 2: string b
   */
  public string $b;

  public function __construct(?int $a = null, ?string $b = null  ) {
    if ($a === null) {
      $this->a = 1234567;
    } else {
      $this->a = $a;
    }
    if ($b === null) {
      $this->b = "<uninitialized>";
    } else {
      $this->b = $b;
    }
  }

  public function getName(): string {
    return 'struct1';
  }

}

/**
 * Original thrift struct:-
 * struct2
 */
class struct2 implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static array $_TSPEC = array(
    1 => array(
      'var' => 'a',
      'type' => \TType::I32,
      ),
    2 => array(
      'var' => 'b',
      'type' => \TType::STRING,
      ),
    3 => array(
      'var' => 'c',
      'type' => \TType::STRUCT,
      'class' => 'struct1',
      ),
    4 => array(
      'var' => 'd',
      'type' => \TType::LST,
      'etype' => \TType::I32,
      'elem' => array(
        'type' => \TType::I32,
        ),
        'format' => 'collection',
      ),
    );
  public static Map<string, int> $_TFIELDMAP = Map {
    'a' => 1,
    'b' => 2,
    'c' => 3,
    'd' => 4,
  };
  const int STRUCTURAL_ID = 6352184485829261382;
  /**
   * Original thrift field:-
   * 1: i32 a
   */
  public int $a;
  /**
   * Original thrift field:-
   * 2: string b
   */
  public string $b;
  /**
   * Original thrift field:-
   * 3: struct module.struct1 c
   */
  public ?struct1 $c;
  /**
   * Original thrift field:-
   * 4: list<i32> d
   */
  public Vector<int> $d;

  public function __construct(?int $a = null, ?string $b = null, ?struct1 $c = null, ?Vector<int> $d = null  ) {
    if ($a === null) {
      $this->a = 0;
    } else {
      $this->a = $a;
    }
    if ($b === null) {
      $this->b = '';
    } else {
      $this->b = $b;
    }
    $this->c = $c;
    if ($d === null) {
      $this->d = Vector {};
    } else {
      $this->d = $d;
    }
  }

  public function getName(): string {
    return 'struct2';
  }

}

/**
 * Original thrift struct:-
 * struct3
 */
class struct3 implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static array $_TSPEC = array(
    1 => array(
      'var' => 'a',
      'type' => \TType::STRING,
      ),
    2 => array(
      'var' => 'b',
      'type' => \TType::I32,
      ),
    3 => array(
      'var' => 'c',
      'type' => \TType::STRUCT,
      'class' => 'struct2',
      ),
    );
  public static Map<string, int> $_TFIELDMAP = Map {
    'a' => 1,
    'b' => 2,
    'c' => 3,
  };
  const int STRUCTURAL_ID = 8770775784736740409;
  /**
   * Original thrift field:-
   * 1: string a
   */
  public string $a;
  /**
   * Original thrift field:-
   * 2: i32 b
   */
  public int $b;
  /**
   * Original thrift field:-
   * 3: struct module.struct2 c
   */
  public ?struct2 $c;

  public function __construct(?string $a = null, ?int $b = null, ?struct2 $c = null  ) {
    if ($a === null) {
      $this->a = '';
    } else {
      $this->a = $a;
    }
    if ($b === null) {
      $this->b = 0;
    } else {
      $this->b = $b;
    }
    $this->c = $c;
  }

  public function getName(): string {
    return 'struct3';
  }

}

enum union1Enum: int {
  _EMPTY_ = 0;
  i = 1;
  d = 2;
}

/**
 * Original thrift struct:-
 * union1
 */
class union1 implements \IThriftStruct, \IThriftUnion<union1Enum> {
  use \ThriftUnionSerializationTrait;

  public static array $_TSPEC = array(
    1 => array(
      'var' => 'i',
      'union' => true,
      'type' => \TType::I32,
      ),
    2 => array(
      'var' => 'd',
      'union' => true,
      'type' => \TType::DOUBLE,
      ),
    );
  public static Map<string, int> $_TFIELDMAP = Map {
    'i' => 1,
    'd' => 2,
  };
  const int STRUCTURAL_ID = 3529312341790331108;
  /**
   * Original thrift field:-
   * 1: i32 i
   */
  public ?int $i;
  /**
   * Original thrift field:-
   * 2: double d
   */
  public ?float $d;
  protected union1Enum $_type = union1Enum::_EMPTY_;

  public function __construct(?int $i = null, ?float $d = null  ) {
    $this->_type = union1Enum::_EMPTY_;
    if ($i !== null) {
      $this->i = $i;
      $this->_type = union1Enum::i;
    }
    if ($d !== null) {
      $this->d = $d;
      $this->_type = union1Enum::d;
    }
  }

  public function getName(): string {
    return 'union1';
  }

  public function getType(): union1Enum {
    return $this->_type;
  }

  public function set_i(int $i): this {
    $this->_type = union1Enum::i;
    $this->i = $i;
    return $this;
  }

  public function get_i(): int {
    invariant(
      $this->_type === union1Enum::i,
      'get_i called on an instance of union1 whose current type is %s',
      $this->_type,
    );
    return nullthrows($this->i);
  }

  public function set_d(float $d): this {
    $this->_type = union1Enum::d;
    $this->d = $d;
    return $this;
  }

  public function get_d(): float {
    invariant(
      $this->_type === union1Enum::d,
      'get_d called on an instance of union1 whose current type is %s',
      $this->_type,
    );
    return nullthrows($this->d);
  }

}

enum union2Enum: int {
  _EMPTY_ = 0;
  i = 1;
  d = 2;
  s = 3;
  u = 4;
}

/**
 * Original thrift struct:-
 * union2
 */
class union2 implements \IThriftStruct, \IThriftUnion<union2Enum> {
  use \ThriftUnionSerializationTrait;

  public static array $_TSPEC = array(
    1 => array(
      'var' => 'i',
      'union' => true,
      'type' => \TType::I32,
      ),
    2 => array(
      'var' => 'd',
      'union' => true,
      'type' => \TType::DOUBLE,
      ),
    3 => array(
      'var' => 's',
      'union' => true,
      'type' => \TType::STRUCT,
      'class' => 'struct1',
      ),
    4 => array(
      'var' => 'u',
      'union' => true,
      'type' => \TType::STRUCT,
      'class' => 'union1',
      ),
    );
  public static Map<string, int> $_TFIELDMAP = Map {
    'i' => 1,
    'd' => 2,
    's' => 3,
    'u' => 4,
  };
  const int STRUCTURAL_ID = 1639711719709684790;
  /**
   * Original thrift field:-
   * 1: i32 i
   */
  public ?int $i;
  /**
   * Original thrift field:-
   * 2: double d
   */
  public ?float $d;
  /**
   * Original thrift field:-
   * 3: struct module.struct1 s
   */
  public ?struct1 $s;
  /**
   * Original thrift field:-
   * 4: struct module.union1 u
   */
  public ?union1 $u;
  protected union2Enum $_type = union2Enum::_EMPTY_;

  public function __construct(?int $i = null, ?float $d = null, ?struct1 $s = null, ?union1 $u = null  ) {
    $this->_type = union2Enum::_EMPTY_;
    if ($i !== null) {
      $this->i = $i;
      $this->_type = union2Enum::i;
    }
    if ($d !== null) {
      $this->d = $d;
      $this->_type = union2Enum::d;
    }
    if ($s !== null) {
      $this->s = $s;
      $this->_type = union2Enum::s;
    }
    if ($u !== null) {
      $this->u = $u;
      $this->_type = union2Enum::u;
    }
  }

  public function getName(): string {
    return 'union2';
  }

  public function getType(): union2Enum {
    return $this->_type;
  }

  public function set_i(int $i): this {
    $this->_type = union2Enum::i;
    $this->i = $i;
    return $this;
  }

  public function get_i(): int {
    invariant(
      $this->_type === union2Enum::i,
      'get_i called on an instance of union2 whose current type is %s',
      $this->_type,
    );
    return nullthrows($this->i);
  }

  public function set_d(float $d): this {
    $this->_type = union2Enum::d;
    $this->d = $d;
    return $this;
  }

  public function get_d(): float {
    invariant(
      $this->_type === union2Enum::d,
      'get_d called on an instance of union2 whose current type is %s',
      $this->_type,
    );
    return nullthrows($this->d);
  }

  public function set_s(struct1 $s): this {
    $this->_type = union2Enum::s;
    $this->s = $s;
    return $this;
  }

  public function get_s(): struct1 {
    invariant(
      $this->_type === union2Enum::s,
      'get_s called on an instance of union2 whose current type is %s',
      $this->_type,
    );
    return nullthrows($this->s);
  }

  public function set_u(union1 $u): this {
    $this->_type = union2Enum::u;
    $this->u = $u;
    return $this;
  }

  public function get_u(): union1 {
    invariant(
      $this->_type === union2Enum::u,
      'get_u called on an instance of union2 whose current type is %s',
      $this->_type,
    );
    return nullthrows($this->u);
  }

}

