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
