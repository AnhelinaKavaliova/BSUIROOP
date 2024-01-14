#include "Toy2.h"

using namespace std;


Toy2 :: Toy2(){
    name = "";
    price = -1;
    ageRestriction= -1;
    count = 0;
    //cout <<"Toy constructor" <<endl;
}
Toy2 :: Toy2(string name, double price, int agerestriction){
    this->name = name;
    this->price= price;
    this->ageRestriction= ageRestriction;
}
Toy2 :: ~Toy2(){/*cout <<"Toy destructor" <<endl;*/};
    
string Toy2 :: getName(){
    return name;
}
void Toy2 :: setName(string name){
    this->name = name;
}
double Toy2 :: getPrice(){
    return price;
}
void Toy2 :: setPrice(double price){
    this->price= price;
}
int Toy2 :: getAgeRestriction(){
    return ageRestriction;
}
void Toy2 :: setAgeRestriction(int ageRestriction){
    this->ageRestriction= ageRestriction;
}
int Toy2 :: getCount(){
    return count;
}
void Toy2 :: setCount(int count){
    this->count += count;
}
void Toy2 :: displayInfo() {
    cout << "Toy Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Age Restriction: " << ageRestriction << endl;
    cout << "In your card "<< count << " of them"<<endl;
}

ostream& operator<<(ostream& os, const Toy2* toy){
    os<<setw(15) << toy->name << setw(10) << toy->price << setw(20) << toy->ageRestriction <<  setw(10) << toy->count << endl;
    return os;
}
istream& operator>>(istream& is, Toy2* toy){

    //is>>setw(15) >> toy->name >> setw(10) >> toy->price >> setw(15) >> toy->ageRestriction >>  setw(10) >> toy->count;

}
