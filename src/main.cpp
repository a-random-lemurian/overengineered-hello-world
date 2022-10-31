#include <iostream>
#include <string>

#include "HelloWorldPrinter.hpp"

int main()
{
  HelloWorldPrinter helloWorldPrinter = HelloWorldPrinter();
  for (int i = 0; i < 1; i++) {
    std::cout << helloWorldPrinter.makeHelloWorldString();
  }

  return 0;
}
