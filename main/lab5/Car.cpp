#include"Car.h"
using namespace std;


int Car :: id = 5; 

Car :: Car(){
    setCount(0);
}

Car :: Car(int count){
    setCount(count);
    id -= count;
    if(id < 0) throw 0;
    setName("Car");
    setPrice(10.99);
    setAgeRestriction(6);
};

void Car :: setColor(string color){
    this->color = color;
}

string Car :: getColor(){
    return color;
}

void Car :: changeID(int newID){
    id += newID;
}
