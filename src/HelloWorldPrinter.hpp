#ifndef HELLOWORLDPRINTER_HPP
#define HELLOWORLDPRINTER_HPP

#include "StringManipulator.hpp"
#include "StringVerifier.hpp"
#include <string>

/**
 * @brief HelloWorldPrinter class.
 * 
 * Contains functions to generate a Hello World message which will be printed
 * to stdout.
 */
class HelloWorldPrinter {
private:
  StringManipulator manipulator;
  StringVerifier verifier;

public:
  HelloWorldPrinter();

  /**
   * @brief Assemble a Hello World string.
   * 
   * When it finishes assembling the string, it calls the
   * HelloWorldPrinter::verifyHelloWorld function to ensure that the function
   * properly generated a Hello World message.
   * 
   * @return std::string 
   */
  std::string makeHelloWorldString();

  /**
   * @brief Verify that a string is indeed a Hello World message.
   * 
   * Uses advanced functions from StringVerifier to ensure the accuracy of the
   * string.
   * 
   * @param value The string to check to ensure that its contents are indeed,
   * a Hello World message.
   *
   * @return true If the string is a Hello World message.
   * @return false Anything else.
   */
  bool verifyHelloWorld(std::string value);

  /**
   * @brief Wrapper for the StringEndsInNewLine from the StringVerifier class.
   * 
   * @param value The string to check.
   * @return true If it ends in a new line.
   * @return false Anything else.
   */
  bool verifyStringEndsInNewLine(std::string value);
};

#endif /* HELLOWORLDPRINTER_HPP */
