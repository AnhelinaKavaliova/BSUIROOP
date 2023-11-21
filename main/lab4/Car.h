#ifndef CAR_H
#define CAR_H
#include"Toy.h"
#include<iostream>
#include<string>

using namespace std;

class Car : public Toy{
    string color;
    //int count;
    public:
    static int id;
    Car();
    Car(int count);
    void setColor(string color);
    string getColor();

};

//int Car :: id = 5;

#endif