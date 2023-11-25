#ifndef TOY_H
#define TOY_H
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class Toy{
    string name;
    double price;
    int ageRestriction;
    int count;
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
    int getCount();
    void setCount(int count);

    virtual void displayInfo();
    friend ostream& operator<<(ostream& os, const Toy* toy);
    friend istream& operator>>(istream& is, Toy* toy);

};

#endif