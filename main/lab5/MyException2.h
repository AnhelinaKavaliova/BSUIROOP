#ifndef MYEXCEPTION2_H
#define MYEXCEPTION2_H
#include <exception>
#include <iostream>

using namespace std;

class MyException2 : public exception {
public:
    const char* what() const noexcept override {
        return "You entered an invalid value";
    }

};

#endif