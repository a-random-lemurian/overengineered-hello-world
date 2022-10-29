#include "StringManipulator.hpp"

StringManipulator::StringManipulator()
{
  return;
}

std::string StringManipulator::getAsciiSpace()
{
  return this->asciiSpaceCharacter;
}

void StringManipulator::addSpaceCharacterToString(std::string *str)
{
  str->append(getAsciiSpace());
}
