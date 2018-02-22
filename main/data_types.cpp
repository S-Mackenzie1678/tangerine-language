#include "data_types.h"
// character
character::character(wchar_t iself) { self = iself; }
// string
string::string(std::string sself) {
  self = sself;
  length = self.size();
}
void string::add(std::string added) {
  self.append(added);
  length = self.size();
}
// array of character
array_character::array_character(std::vector<char> sself) {
  self = sself;
  length = self.size();
}
void array_character::back_add(char added) { self.push_back(added); }
unsigned long long int array_character::capacity() { return self.size(); }
// array of string
array_string::array_string(std::vector<std::string> sself) {
  self = sself;
  length = self.size();
}
void array_string::back_add(std::string added) { self.push_back(added); }

unsigned long long int array_string::capacity() { return self.size(); }
// array of float
array_floating::array_floating(std::vector<long double> sself) {
  self = sself;
  length = self.size();
}
void array_floating::back_add(long double added) { self.push_back(added); }

unsigned long long int array_floating::capacity() { return self.size(); }
// array of bool
array_boolean::array_boolean(std::vector<bool> sself) {
  self = sself;
  length = self.size();
}
void array_boolean::back_add(bool added) { self.push_back(added); }

unsigned long long int array_boolean::capacity() { return self.size(); }
// array of unint
array_unint::array_unint(std::vector<unsigned long long int> sself) {
  self = sself;
  length = self.size();
}
void array_unint::back_add(unsigned long long int added) {
  self.push_back(added);
}
unsigned long long int array_unint::capacity() { return self.size(); }
// array of sint
array_sint::array_sint(std::vector<long long int> sself) {
  self = sself;
  length = self.size();
}
void array_sint::back_add(long long int added) { self.push_back(added); }

unsigned long long int array_sint::capacity() { return self.size(); }
// floating
floating::floating(long double sself) { self = sself; }
long double floating::add(long double other_addend) {
  return self + other_addend;
}
long double floating::subtract(long double subtrahend) {
  return self - subtrahend;
}
long double floating::multiply(long double factor) { return self * factor; }
long double floating::divide(long double divisor) { return self / divisor; }
long double floating::power(long double exponent) {
  return static_cast<long double>(std::pow(self, exponent));
}
long double floating::root(long double xth_root) {
  return static_cast<long double>(std::pow(self, (1 / xth_root)));
}
// boolean
boolean::boolean(bool sself) { self = sself; }
bool boolean::logic_not() { return !self; }
bool boolean::logic_and(bool other) { return self && other; }
bool boolean::logic_or(bool other) { return self || other; }
bool boolean::logic_nand(bool other) { return !(self && other); }
bool boolean::logic_nor(bool other) { return !(self || other); }
bool boolean::logic_xor(bool other) { return self ^ other; }
bool boolean::logic_xnor(bool other) { return !(self ^ other); }
// unint
unint::unint(unsigned long long int sself) { self = sself; }
unsigned long long int unint::add(unsigned long long int other_addend) {
  return static_cast<unsigned long long int>(
      static_cast<long long int>(self) +
      static_cast<long long int>(other_addend));
}
long long int unint::subtract(unsigned long long int subtrahend) {
  return static_cast<long long int>(self) -
         static_cast<long long int>(subtrahend);
}
unsigned long long int unint::multiply(unsigned long long int product) {
  return static_cast<unsigned long long int>(
      static_cast<long long int>(self) * static_cast<long long int>(product));
}
long double unint::divide(unsigned long long int divisor) {
  return (static_cast<long double>(self) / static_cast<long double>(divisor));
}
unsigned long long int unint::power(unsigned long long int exponent) {
  return static_cast<long double>(std::pow(
      static_cast<long long int>(self), static_cast<long long int>(exponent)));
}
long double unint::root(unsigned long long int xth_root) {
  return static_cast<long double>(
      std::pow(static_cast<long double>(self),
               (1 / static_cast<long double>(xth_root))));
}
unsigned long long int unint::mod(unsigned long long int divisor) {
  return static_cast<unsigned long long int>(
      static_cast<long long int>(self) % static_cast<long long int>(divisor));
}
// sint
sint::sint(long long int sself) { self = sself; }
long long int sint::add(long long int other_addend) {
  return self + other_addend;
}
long long int sint::subtract(long long int subtrahend) {
  return self - subtrahend;
}
long long int sint::multiply(long long int factors) { return self * factors; }
long double sint::divide(long long int divisor) {
  return static_cast<long double>(self) / static_cast<long double>(divisor);
}
long long int sint::power(long long int exponent) {
  return static_cast<long long int>(std::pow(self, exponent));
}
long double sint::root(long long int xth_root) {
  return static_cast<long double>(
      std::pow(static_cast<long double>(self),
               (1 / static_cast<long double>(xth_root))));
}
long long int sint::mod(long long int divisor) { return self % divisor; }
