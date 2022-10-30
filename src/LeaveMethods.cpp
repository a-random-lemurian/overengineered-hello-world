#include "LeaveMethods.hpp"
#include <cstdlib>

LeaveMethods::LeaveMethods()
{

}

void LeaveMethods::LeaveWithAbortSignal()
{
  std::abort();
}
