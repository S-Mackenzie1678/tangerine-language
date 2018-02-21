#include <cmath>
#include <string>
#include <vector>  // The data types will be character, string, array, floating, boolean, uint, sint
class character {
 public:
  wchar_t self;
  character(wchar_t iself);
};
class string {
 public:
  std::string self;
  unsigned long long int length;
  string(std::string sself);
  void add(std::string added);
};
class array_character {
 public:
  std::vector<char> self;
  unsigned long long int length;
  array_character(std::vector<char> sself);
  void back_add(char added);
  void front_add(char added);
  void add_after(char added, unsigned long long int index);
  unsigned long long int capacity();
};
class array_string {
 public:
  std::vector<std::string> self;
  unsigned long long int length;
  array_string(std::vector<std::string> sself);
  void back_add(std::string added);
  void front_add(std::string added);
  void add_after(std::string added, unsigned long long int index);
  unsigned long long int capacity();
};
class array_floating {
 public:
  std::vector<long double> self;
  unsigned long long int length;
  array_floating(std::vector<long double> sself);
  void back_add(long double added);
  void front_add(long double added);
  void add_after(long double added, unsigned long long int index);
  unsigned long long int capacity();
};
class array_boolean {
 public:
  std::vector<bool> self;
  unsigned long long int length;
  array_boolean(std::vector<bool> sself);
  void back_add(bool added);
  void front_add(bool added);
  void add_after(bool added, unsigned long long int index);
  unsigned long long int capacity();
};
class array_uint {
 public:
  std::vector<unsigned long long int> self;
  unsigned long long int length;
  array_uint(std::vector<unsigned long long int> sself);
  void back_add(unsigned long long int added);
  void front_add(unsigned long long int added);
  void add_after(unsigned long long int added, unsigned long long int index);
  unsigned long long int capacity();
};
class array_sint {
 public:
  std::vector<long long int> self;
  unsigned long long int length;
  array_sint(std::vector<long long int> sself);
  void back_add(long long int added);
  void front_add(long long int added);
  void add_after(long long int added, unsigned long long int index);
  unsigned long long int capacity();
};
class floating {
 public:
  long double self;
  floating(long double sself);
  long double add(long double other_addend);
  long double subtract(long double subtrahend);
  long double multiply(long double factor);
  long double divide(long double divisor);
  long double power(long double exponent);
  long double root(long double xth_root);
};
class boolean {
 public:
  bool self;
  boolean(bool sself);
  bool logic_not();
  bool logic_and(bool other);
  bool logic_or(bool other);
  bool logic_nand(bool other);
  bool logic_nor(bool other);
  bool logic_xor(bool other);
  bool logic_xnor(bool other);
};
class unint {
 public:
  unsigned long long int self;
  unint(unsigned long long int sself);
  unsigned long long int add(unsigned long long int other_addend);
  long long int subtract(unsigned long long int subtrahend);
  unsigned long long int multiply(unsigned long long int product);
  long double divide(unsigned long long int divisor);
  unsigned long long int power(unsigned long long int exponent);
  long double root(unsigned long long int xth_root);
  unsigned long long int mod(unsigned long long int divisor);
};
class sint {
 public:
  long long int self;
  sint(long long int sself);
  long long int add(long long int other_addend);
  long long int subtract(long long int subtrahend);
  long long int multiply(long long int factors);
  long double divide(long long int divisor);
  long long int power(long long int exponent);
  long double root(long long int xth_root);
  long long int mod(long long int divisor);
};
