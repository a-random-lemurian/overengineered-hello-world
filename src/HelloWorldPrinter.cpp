#include <iostream>

#include "HelloWorldPrinter.hpp"
#include "StringManipulator.hpp"

HelloWorldPrinter::HelloWorldPrinter()
{
}

bool HelloWorldPrinter::verifyHelloWorld(std::string value)
{
  bool check1 = this->verifier.TwoStringsMatch(value, "Hello World!\n");
  bool check2 = this->verifier.StringEndsInNewLine(value);

  if (check1 && check2) {
    return true;
  }
  else {
    return false;
  }
}

bool HelloWorldPrinter::verifyStringEndsInNewLine(std::string value)
{
  if (this->verifier.StringEndsInNewLine(value)) {
    return true;
  }
  else {
    return false;
  }
}

std::string HelloWorldPrinter::makeHelloWorldString()
{
  std::string returnValue;

  returnValue.append("Hello");
  this->manipulator.addSpaceCharacterToString(&returnValue);
  returnValue.append("World!");
  returnValue.append("\n");

  if (this->verifyHelloWorld(returnValue) == true) {
    return returnValue;
  }
  else {
    std::cout << "verifier failed";
    abort();
  }
}
