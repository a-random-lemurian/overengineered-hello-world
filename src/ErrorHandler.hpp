#ifndef ERRORHANDLER_HPP
#define ERRORHANDLER_HPP

#include "ErrorHandlingMethod.hpp"
#include "ErrorType.hpp"
#include "StringVerifier.hpp"
#include <string>

/**
 * @brief Error handler class.
 */
class ErrorHandler {
private:
  ErrorType errorType;
  ErrorHandlingMethod errorHandlingMethod;
  std::string errorMessage;

  StringVerifier verifier;

public:
  ErrorHandler();

  /**
   * @brief Set the error message.
   * 
   * @param errorMessage The error message.
   */
  void SetErrorMessage(std::string errorMessage);

  /**
   * @brief Handle the error.
   */
  void Handle();

  /**
   * @brief Get the error message as a string.
   * 
   * @return std::string The error message string.
   */
  std::string GetErrorMessageString();

  /**
   * @brief Print the error message.
   */
  void PrintErrorMessage();

  /**
   * @brief Leave with the specified method.
   */
  void Leave();

  /**
   * @brief Set how we will handle the error.
   */
  void SetErrorHandler(ErrorHandlingMethod method);
};

#endif /* ERRORHANDLER_HPP */
