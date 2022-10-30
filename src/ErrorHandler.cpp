#include <iostream>
#include "ErrorHandler.hpp"
#include "LeaveMethods.hpp"

ErrorHandler::ErrorHandler()
{
}

void ErrorHandler::SetErrorMessage(std::string errorMessage)
{
  this->errorMessage = errorMessage;
}

void ErrorHandler::PrintErrorMessage()
{
  std::cout << GetErrorMessageString();

  if (verifier.StringEndsInNewLine(GetErrorMessageString()) == false) {
    std::cout << "\n";
  }
}

std::string ErrorHandler::GetErrorMessageString()
{
  return this->errorMessage;
}

void ErrorHandler::Handle()
{
  PrintErrorMessage();
  Leave();
}

void ErrorHandler::Leave()
{
  LeaveMethods leaveMethods;

  switch (this->errorHandlingMethod)
  {
    case LeaveWithAbortSignal:
      leaveMethods.LeaveWithAbortSignal();
  }
}

void ErrorHandler::SetErrorHandler(ErrorHandlingMethod method)
{
  this->errorHandlingMethod = method;
}
