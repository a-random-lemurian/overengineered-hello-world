#ifndef STRINGVERIFIER_HPP
#define STRINGVERIFIER_HPP

#include <string>

class StringVerifier {
public:
  StringVerifier();
  bool TwoStringsMatch(std::string firstString, std::string secondString);
  bool StringEndsWith(std::string value, char expectedEnding);
  bool StringEndsInNewLine(std::string value);
};

#endif /* STRINGVERIFIER_HPP */
