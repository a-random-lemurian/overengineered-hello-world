#ifndef OPERATINGSYSTEMCHECKER_HPP
#define OPERATINGSYSTEMCHECKER_HPP

#include "OperatingSystem.hpp"

class OperatingSystemChecker {
  public:
  /**
   * @brief Get the current operating system.
   * 
   * @return OperatingSystem Enum value representing the current
   * operating system.
   */
  OperatingSystem getOperatingSystem();
};

#endif /* OPERATINGSYSTEMCHECKER_HPP */
