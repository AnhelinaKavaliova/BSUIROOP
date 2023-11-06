#ifndef TOY_H
#define TOY_H
#include<iostream>
#include<string>

using namespace std;

class Toy{
    string name;
    double price;
    int ageRestriction;

    public:
    Toy();
    Toy(string name, double price, int agerestriction);
    ~Toy();
    string getName();
    void setName(string name);
    double getPrice();
    void setPrice(double price);
    int getAgeRestriction();
    void setAgeRestriction(int ageRestriction);
    void displayInfo();

};

#endif