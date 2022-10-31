#include "NewLineProvider.hpp"
#include "OperatingSystemChecker.hpp"
#include <string>

std::string NewLineProvider::getNewLineCharacter()
{
  OperatingSystemChecker osChecker;
  std::string chosenLineBreak;

  switch (osChecker.getOperatingSystem()) {
    case OperatingSystem::Linux:
      return this->lf;
    case OperatingSystem::Mac:
      return this->lf;
    case OperatingSystem::MicrosoftWindows:
      return this->crlf;
  }
}
