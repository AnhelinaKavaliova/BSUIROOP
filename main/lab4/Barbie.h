#ifndef BARBIE_H
#define BARBIE_H
#include"Doll.h"
#include<iostream>
#include<string>

using namespace std;

class Barbie : public Doll{
    int count;
    public:
    static int id;
    Barbie(int count);

    ~Barbie();
};

int Barbie :: id = 5;

#endif