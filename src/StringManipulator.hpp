#ifndef STRINGMANIPULATOR_HPP
#define STRINGMANIPULATOR_HPP
#include <string>

class StringManipulator {
private:
  const std::string asciiSpaceCharacter = " ";

public:
  StringManipulator();
  std::string getAsciiSpace();
  void addSpaceCharacterToString(std::string *str);
};

#endif /* STRINGMANIPULATOR_HPP */
