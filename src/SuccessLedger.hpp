#ifndef SUCCESSLEDGER_HPP
#define SUCCESSLEDGER_HPP
#include <vector>

/**
 * @brief SuccessLedger object. Contains a vector full of boolean values.
 */
class SuccessLedger {
private:
  std::vector<bool> ledger;

public:
  SuccessLedger();

  /**
   * @brief Get a pointer to the internal vector containing boolean values.
   *
   * @return std::vector<bool>* Pointer to the vector in question.
   */
  std::vector<bool> *getLedger();

  /**
   * @brief Get whether all entries in the ledger are true.
   *
   * @return true If all entries in the ledger are true.
   * @return false Anything else.
   */
  bool getLedgerSuccess();

  /**
   * @brief Register a success.
   *
   * Adds a boolean value "true" to the vector.
   */
  void registerSuccess();

  /**
   * @brief Register a failure.
   *
   * Adds a boolean value "false" to the vector.
   */
  void registerFailure();

  /**
   * @brief Register a boolean value.
   * 
   * @param value A boolean value.
   */
  void registerBooleanValue(bool value);
};

#endif /* SUCCESSLEDGER_HPP */
