#include "InvalidActionException.hpp"

InvalidActionException::InvalidActionException(const std::string &message)
    : BaseException(message) {}
