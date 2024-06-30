#include "BaseException.hpp"

BaseException::BaseException(const std::string& message)
    : errorMessage(message) {}

const char* BaseException::what() const noexcept {
    return errorMessage.c_str();
}
