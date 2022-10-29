#include "StringVerifier.hpp"

#include <cstring>
#include <vector>

StringVerifier::StringVerifier() {}

bool StringVerifier::TwoStringsMatch(std::string firstString,
                                     std::string secondString)
{
  /*
   * Run the check many times - the length of the first string multiplied
   * by five, to account for the effects of bit flips.
   */
  std::vector<bool> checkInstances;

  for (unsigned long i = 0; i < firstString.length() * 5; i++) {
    bool check1 = false;
    bool check2 = false;
    bool check3 = false;

    if (firstString == secondString) {
      check1 = true;
    }

    if (firstString.length() == secondString.length()) {
      for (unsigned long i = 1; i < firstString.length(); i++) {
        if (firstString[i] != firstString[i]) {
          check2 = false;
          break;
        }
        else {
          check2 = true;
        }
      }

      if (std::strcmp(firstString.c_str(), secondString.c_str()) == 0) {
        check3 = true;
      }
    }

    if (check1 && check2 && check3) {
      checkInstances.push_back(true);
    }
    else {
      checkInstances.push_back(false);
    }
  }

  for (unsigned long i = 0; i < checkInstances.size(); i++) {
    if (checkInstances[i] == false) {
      return false;
    }
  }

  return true;
}

bool StringVerifier::StringEndsWith(std::string value, char expectedEnding)
{
  if (value.back() == expectedEnding) {
    return true;
  }
  else {
    return false;
  }
}

bool StringVerifier::StringEndsInNewLine(std::string value)
{
  return this->StringEndsWith(value, '\n');
}