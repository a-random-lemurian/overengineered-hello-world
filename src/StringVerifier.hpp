#ifndef STRINGVERIFIER_HPP
#define STRINGVERIFIER_HPP

#include <string>

/**
 * @brief StringVerifier class to check the validity of strings against some
 * given conditions.
 */
class StringVerifier {
public:
  StringVerifier();

  /**
   * @brief Check if two strings match.
   * 
   * @param firstString First string.
   * @param secondString Second string.
   * @return true If both strings match.
   * @return false Anything else.
   */
  bool TwoStringsMatch(std::string firstString, std::string secondString);

  /**
   * @brief Check if a string ends with an expected character.
   * 
   * @param value Value to check.
   * @param expectedEnding Expected character at the end of the value.
   * @return true If the string ends in the expected character.
   * @return false Anything else.
   */
  bool StringEndsWith(std::string value, char expectedEnding);

  /**
   * @brief Check if a string ends with a newline.
   * 
   * @param value Value to check.
   * @return true If the string ends in a newline.
   * @return false Anything else.
   */
  bool StringEndsInNewLine(std::string value);
};

#endif /* STRINGVERIFIER_HPP */
