#include"Car.h"
using namespace std;


Car :: Car(int count){
    this -> count = count;
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
