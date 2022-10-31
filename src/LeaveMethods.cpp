#include "LeaveMethods.hpp"
#include <cstdlib>

LeaveMethods::LeaveMethods()
{

}

void LeaveMethods::LeaveWithAbortSignal()
{
  std::abort();
}

void LeaveMethods::LeaveWithSuccess()
{
  std::exit(EXIT_SUCCESS);
}
