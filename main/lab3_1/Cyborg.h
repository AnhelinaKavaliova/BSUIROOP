#ifndef CYBORG_H
#define CYBORG_H
#include<iostream>
#include<string>
#include"Human.h"
#include"Machine.h"

using namespace std;

class Cyborg : virtual public Human, public Machine{
    int strength, speed, energy;

    // protected:
    // void setStatus();

    public:
    Cyborg();
    Cyborg(string name, string model);
    ~Cyborg();
    int getStrength();
    int getSpeed();
    int getEnergy();
    virtual void status();
     void setStatus();

};


#endif