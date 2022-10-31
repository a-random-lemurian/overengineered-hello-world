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

  for (unsigned long i = 0; i < value.length() * 5; i = i + 1) {
    SuccessLedger checksForThisLoop;

    if (this->verifier.TwoStringsMatch(value, "Hello World!\n")) {
      checksForThisLoop.registerSuccess();
    }
    else {
      checksForThisLoop.registerFailure();
    }

    if (this->verifier.StringEndsInNewLine(value)) {
      checksForThisLoop.registerSuccess();
    }
    else {
      checksForThisLoop.registerFailure();
    }

    if (checksForThisLoop.getLedgerSuccess() == true) {
      checks.registerSuccess();
    }
    else if (checksForThisLoop.getLedgerSuccess() == false) {
      checks.registerFailure();
    }
  }

  return checks.getLedgerSuccess();
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
