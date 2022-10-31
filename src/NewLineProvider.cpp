#include "NewLineProvider.hpp"
#include "OperatingSystemChecker.hpp"
#include <string>

std::string NewLineProvider::getNewLineCharacter()
{
  OperatingSystemChecker osChecker;
  std::string chosenLineBreak;

  switch (osChecker.getOperatingSystem()) {
    case OperatingSystem::Linux:
      chosenLineBreak = this->lf;
      break;
    case OperatingSystem::Mac:
      chosenLineBreak = this->lf;
      break;
    case OperatingSystem::MicrosoftWindows:
      chosenLineBreak = this->crlf;
      break;
  }

  return chosenLineBreak;
}
