#ifndef BARBIE2_H
#define BARBIE2_H
#include "Doll2.h"
#include<iostream>
#include<string>

using namespace std;

class Barbie2 : public Doll2{
    //int count;
    public:
    static int id;
    int valId;
    Barbie2();
    Barbie2(int count);
    int geValId();
    ~Barbie2();
    void getAccessories();
    //void displayInfo();
    void changeID(int newID);
};

//s

#endif