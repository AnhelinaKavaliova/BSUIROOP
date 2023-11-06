#ifndef TOYSTORE_H
#define TOYSTORE_H
#include<iostream>
#include<string>
#include"Car.h"
#include"BoardGame.h"
#include "Barbie.h"
#include"TalkingDoll.h"
#include<exception>

using namespace std;

class ToyStore{
    bool isOpen;
    Toy* order;
    public:
    ToyStore();
    ~ToyStore();
    Toy getOrder();
    void setOrder(Toy &toy);
    void randomSetIsOpen();
    bool getIsOpen();
    void open();
    void close();
    void orderInfo();
    void catalog();
};

#endif