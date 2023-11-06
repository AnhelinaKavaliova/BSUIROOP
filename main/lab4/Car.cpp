#include"Toy.h"
#include<iostream>
#include<string>

using namespace std;

class Car : public Toy{
    string color;
    public:
    static int Count;
    Car(){
        setName("Car");
        setPrice(10.99);
        setAgeRestriction(6);
        Count++;
    };

    void setColor(string color){
        this->color = color;
    }

    string getColor(){
        return color;
    }

};

int Car :: Count = 0;