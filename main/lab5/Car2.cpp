#include "Car2.h"
using namespace std;


int Car2 :: id = 5; 

Car2 :: Car2(){
    setCount(0);
}

Car2 :: Car2(int count){
    setCount(count);
    id -= count;
    if(id < 0) throw 0;
    setName("Car");
    setPrice(10.99);
    setAgeRestriction(6);
};

void Car2 :: setColor(string color){
    this->color = color;
}

string Car2 :: getColor(){
    return color;
}

void Car2 :: changeID(int newID){
    id += newID;
}

