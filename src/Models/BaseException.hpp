#ifndef BASE_EXCEPTION_HPP
#define BASE_EXCEPTION_HPP

#include <exception>
#include <string>

class BaseException : public std::exception {
public:
    explicit BaseException(const std::string& message);
    virtual const char* what() const noexcept override;

protected:
    std::string errorMessage;
};

#endif // BASE_EXCEPTION_HPP
