#ifndef DOLL_H
#define DOLL_H
#include"Toy.h"
#include<iostream>
#include<string>

using namespace std;

class Doll : public Toy{
    bool canSpeak;
    public:
    Doll();
    ~Doll();
    void setCanSpeak(bool canSpeak);
    bool getCanSpeak();
    void sayHello();

};

#endif