#ifndef HELLOWORLDPRINTER_HPP
#define HELLOWORLDPRINTER_HPP

#include "StringManipulator.hpp"
#include "StringVerifier.hpp"
#include <string>

class HelloWorldPrinter {
private:
  StringManipulator manipulator;
  StringVerifier verifier;

public:
  HelloWorldPrinter();
  std::string makeHelloWorldString();
  bool verifyHelloWorld(std::string value);
  bool verifyStringEndsInNewLine(std::string value);
};

#endif /* HELLOWORLDPRINTER_HPP */
