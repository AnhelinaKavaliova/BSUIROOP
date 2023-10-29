#ifndef HUMAN_H
#define HUMAN_H
#include<iostream>
#include<string>

using namespace std;

class Human{
    string name;
    public:
    Human();
    Human(string name);
    ~Human();
    void setName(string name);
    string getName();
    void speak();
};

#endif