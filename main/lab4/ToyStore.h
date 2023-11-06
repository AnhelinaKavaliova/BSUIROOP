#ifndef TOYSTORE_H
#define TOYSTORE_H
#include<iostream>
#include<string>
#include"Toy.h"
#include<exception>

using namespace std;

class ToyStore{
    bool isOpen;
    Toy* order;
    public:
    ToyStore();
    ~ToyStore();
    void randomSetIsOpen();
    bool getIsOpen();
    void open();
    void close();
    void orderInfo();
};

#endif