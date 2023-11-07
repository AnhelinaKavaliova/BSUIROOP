#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H
#include <exception>
#include <iostream>

using namespace std;

class MyException : public exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred.";
    }

};

#endif