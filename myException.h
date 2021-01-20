//
// Created by 84000 on 2021/1/19.
//

#ifndef LINEARLIST_MYEXCEPTION_H
#define LINEARLIST_MYEXCEPTION_H
#include <exception>
#include <stdexcept>
#include <string>

class myException : public std::runtime_error {
public:
    explicit myException(const std::string &s) : std::runtime_error(s) {}
};


#endif //LINEARLIST_MYEXCEPTION_H
