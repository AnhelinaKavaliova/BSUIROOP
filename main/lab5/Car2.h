#ifndef CAR2_H
#define CAR2_H
#include"Toy2.h"
#include<iostream>
#include<string>

using namespace std;

class Car2 : public Toy2{
    string color;
    //int count;
    public:
    static int id;
    Car2();
    Car2(int count);
    void setColor(string color);
    string getColor();
    void changeID(int newID);

};

//int Car :: id = 5;

#endif