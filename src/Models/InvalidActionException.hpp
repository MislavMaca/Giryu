#ifndef INVALID_ACTION_EXCEPTION_HPP
#define INVALID_ACTION_EXCEPTION_HPP

#include "BaseException.hpp"

class InvalidActionException : public BaseException {
public:
    explicit InvalidActionException(const std::string& message);
};

#endif // INVALID_ACTION_EXCEPTION_HPP
