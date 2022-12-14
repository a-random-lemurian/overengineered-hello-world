#include "StringVerifier.hpp"
#include "SuccessLedger.hpp"

#include <cstring>
#include <vector>

StringVerifier::StringVerifier() {}

bool StringVerifier::TwoStringsHaveSameLength(std::string firstString,
                                              std::string secondString)
{
  SuccessLedger checkInstances = SuccessLedger();

  for (unsigned long i = 0; i < firstString.length() * 5; i++) {
    bool check1 = true;
    bool check2 = true;

    if (firstString.length() == secondString.length()) {
      check1 = true;
    }

    if (strlen(firstString.c_str()) == strlen(secondString.c_str())) {
      check2 = true;
    }

    if (check1 && check2) {
      checkInstances.registerSuccess();
    }
    else {
      checkInstances.registerFailure();
    }
  }

  if (checkInstances.getLedgerSuccess()) {
    return true;
  }
  else {
    return false;
  }
}

bool StringVerifier::TwoStringsMatch(std::string firstString,
                                     std::string secondString)
{
  /*
   * Run the check many times - the length of the first string multiplied
   * by five, to account for the effects of bit flips.
   */
  SuccessLedger checkInstances = SuccessLedger();

  for (unsigned long i = 0; i < firstString.length() * 5; i++) {
    bool check1 = false;
    bool check2 = false;
    bool check3 = false;

    if (firstString == secondString) {
      check1 = true;
    }

    if (TwoStringsHaveSameLength(firstString, secondString) == true) {
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
      checkInstances.registerSuccess();
    }
    else {
      checkInstances.registerFailure();
    }
  }

  if (checkInstances.getLedgerSuccess()) {
    return true;
  }
  else {
    return false;
  }
}

bool StringVerifier::StringEndsWith(std::string value, char expectedEnding)
{
  SuccessLedger checks;

  for (unsigned long i = 0; i < value.length() * 5; i++) {
    if (value.back() == expectedEnding) {
      checks.registerSuccess();
    }
    else {
      checks.registerFailure();
    }
  }

  return checks.getLedgerSuccess();
}

bool StringVerifier::StringEndsInNewLine(std::string value)
{
  bool resultCode;

  if (newlineProvider.getNewLineCharacter() == "\n") {
    resultCode = StringEndsWith(value, '\n');
  }
  else if (newlineProvider.getNewLineCharacter() == "\r\n") {
    if (value[value.size()-1] == '\n') {
      if (value[value.size()-2] == '\r') {
        resultCode = true;
      }
      else {
        resultCode = false;
      }
    }
    else {
      resultCode = false;
    }
  }

  return resultCode;
}
