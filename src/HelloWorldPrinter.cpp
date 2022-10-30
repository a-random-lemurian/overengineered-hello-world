#include <iostream>

#include "HelloWorldPrinter.hpp"
#include "StringManipulator.hpp"
#include "ErrorHandler.hpp"
#include "SuccessLedger.hpp"

HelloWorldPrinter::HelloWorldPrinter()
{
}

bool HelloWorldPrinter::verifyHelloWorld(std::string value)
{
  SuccessLedger checks;

  if (this->verifier.TwoStringsMatch(value, "Hello World!\n")) {
    checks.registerSuccess();
  }
  else {
    checks.registerFailure();
  }

  if (this->verifier.StringEndsInNewLine(value)) {
    checks.registerSuccess();
  }
  else {
    checks.registerFailure();
  }

  if (checks.getLedgerSuccess() == true) {
    return true;
  }
  else if (checks.getLedgerSuccess() == false) {
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
    const std::string stringWasNotHelloWorldMessage = "verifier failed - "
                                                      "message is not hello "
                                                      "world";

    ErrorHandler notHelloWorldErrorHandler;

    notHelloWorldErrorHandler.SetErrorMessage(stringWasNotHelloWorldMessage);
    notHelloWorldErrorHandler.SetErrorHandler(LeaveWithAbortSignal);
    notHelloWorldErrorHandler.Handle();

    return NULL;
  }

  return returnValue;
}
