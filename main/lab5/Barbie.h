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
    Barbie();
    Barbie(int count);
    int geValId();
    ~Barbie();
    void getAccessories();
    //void displayInfo();
};

//s

#endif