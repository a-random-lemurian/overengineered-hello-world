#include "SuccessLedger.hpp"

SuccessLedger::SuccessLedger()
{

}

std::vector<bool>* SuccessLedger::getLedger()
{
  return &this->ledger;
}

bool SuccessLedger::getLedgerSuccess()
{
  std::vector<bool> ledger = this->ledger;

  for (unsigned long i = 1; i < ledger.size(); i++) {
    if (ledger[i] == false) {
      return false;
    }
  }

  return true;
}

void SuccessLedger::registerFailure()
{
  this->getLedger()->push_back(false);
}

void SuccessLedger::registerSuccess()
{
  this->getLedger()->push_back(true);
}

void SuccessLedger::registerBooleanValue(bool value)
{
  if (value == true) {
    registerSuccess();
  }
  else if (value == false) {
    registerFailure();
  }
}

unsigned long SuccessLedger::getCountByValue(bool wanted)
{
  unsigned long count = 0;
  std::vector<bool> ledger = this->ledger;

  for (unsigned long i = 0; i < ledger.size(); i = i + 1) {
    if (ledger[i] == wanted) {
      count = count + 1;
    }
  }

  return (unsigned long)count;
}

unsigned long SuccessLedger::getLedgerSuccessCount()
{
  return getCountByValue(true);
}

unsigned long SuccessLedger::getLedgerFailureCount()
{
  return getCountByValue(false);
}
