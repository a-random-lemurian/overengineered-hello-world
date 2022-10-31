#include <iostream>
#include <string>

#include "HelloWorldPrinter.hpp"
#include "LeaveMethods.hpp"

int main()
{
  HelloWorldPrinter helloWorldPrinter = HelloWorldPrinter();
  for (int i = 0; i < 1; i++) {
    std::cout << helloWorldPrinter.makeHelloWorldString();
  }

  LeaveMethods leave;
  leave.LeaveWithSuccess();

  return 0;
}
