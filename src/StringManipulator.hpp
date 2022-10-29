#ifndef STRINGMANIPULATOR_HPP
#define STRINGMANIPULATOR_HPP
#include <string>

/**
 * @brief StringManipulator class. Used to provide high-quality reliable and
 * advanced manipulation operations for strings.
 */
class StringManipulator {
private:
  const std::string asciiSpaceCharacter = " ";

public:
  StringManipulator();

  /**
   * @brief Get the asciiSpaceCharacter.
   * 
   * @return std::string ASCII space character
   */
  std::string getAsciiSpace();

  /**
   * @brief Adds an ASCII space character to a string.
   * 
   * @param str A pointer to std::string.
   */
  void addSpaceCharacterToString(std::string *str);
};

#endif /* STRINGMANIPULATOR_HPP */
