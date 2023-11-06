#include"Toy.h"

using namespace std;

Toy :: Toy(){
    name = "";
    price = -1;
    ageRestriction= -1;
}
Toy :: Toy(string name, double price, int agerestriction){
    this->name = name;
    this->price= price;
    this->ageRestriction= ageRestriction;
}
Toy :: ~Toy(){};
    
string Toy :: getName(){
    return name;
}
void Toy :: setName(string name){
    this->name = name;
}
double Toy :: getPrice(){
    return price;
}
void Toy :: setPrice(double price){
    this->price= price;
}
int Toy :: getAgeRestriction(){
    return ageRestriction;
}
void Toy :: setAgeRestriction(int ageRestriction){
    this->ageRestriction= ageRestriction;
}
void Toy :: displayInfo() {
    cout << "Toy Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Age Restriction: " << ageRestriction << endl;
}