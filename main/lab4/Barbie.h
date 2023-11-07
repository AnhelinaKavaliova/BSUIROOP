#ifndef BARBIE_H
#define BARBIE_H
#include"Doll.h"
#include<iostream>
#include<string>

using namespace std;

class Barbie : public Doll{
    //int count;
    public:
    static int id;
    int valId;
    Barbie(int count);
    int geValId();
    ~Barbie();
};

//s

#endif