#include "OperatingSystemChecker.hpp"
#include "OperatingSystem.hpp"

OperatingSystem OperatingSystemChecker::getOperatingSystem()
{
  OperatingSystem system;

#ifdef __APPLE__
  system = OperatingSystem::Mac;
#elif _WIN32
  system = OperatingSystem::MicrosoftWindows;
#elif __linux__
  system = OperatingSystem::Linux;
#endif

  return system;
}

