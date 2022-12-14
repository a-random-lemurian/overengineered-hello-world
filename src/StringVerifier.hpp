#ifndef STRINGVERIFIER_HPP
#define STRINGVERIFIER_HPP

#include <string>
#include "NewLineProvider.hpp"

/**
 * @brief StringVerifier class to check the validity of strings against some
 * given conditions.
 */
class StringVerifier {
private:
  NewLineProvider newlineProvider;
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

  /**
   * @brief Check if two strings have the same length.
   * 
   * @param firstString First string.
   * @param secondString Second string.
   * @return true If both strings have the same length.
   * @return false Anything else.
   */
  bool TwoStringsHaveSameLength(std::string firstString,
                                std::string secondString);
};

#endif /* STRINGVERIFIER_HPP */
