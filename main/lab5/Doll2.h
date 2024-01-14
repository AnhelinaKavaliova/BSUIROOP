#ifndef DOLL2_H
#define DOLL2_H
#include"Toy2.h"
#include<iostream>
#include<string>

using namespace std;

class Doll2 : public Toy2{
    bool canSpeak;
    public:
    Doll2();
    ~Doll2();
    void setCanSpeak(bool canSpeak);
    bool getCanSpeak();
    void sayHello();
    virtual void getAccessories() = 0;
    void displayInfo();

};

#endif