#ifndef TOY2_H
#define TOY2_H
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class Toy2{
    string name;
    double price;
    int ageRestriction;
    int count;
    public:
    Toy2();
    Toy2(string name, double price, int agerestriction);
    ~Toy2();
    string getName();
    void setName(string name);
    double getPrice();
    void setPrice(double price);
    int getAgeRestriction();
    void setAgeRestriction(int ageRestriction);
    int getCount();
    void setCount(int count);

    virtual void displayInfo();
    friend ostream& operator<<(ostream& os, const Toy2* toy);
    friend istream& operator>>(istream& is, Toy2* toy);

};

#endif