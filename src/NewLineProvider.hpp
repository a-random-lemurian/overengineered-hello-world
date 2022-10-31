#ifndef NEWLINEPROVIDER_HPP
#define NEWLINEPROVIDER_HPP
#include <string>

class NewLineProvider {
  private:
    const std::string crlf = "\r\n";
    const std::string lf = "\n";

  public:
    std::string getNewLineCharacter();
}

#endif /* NEWLINEPROVIDER_HPP */
