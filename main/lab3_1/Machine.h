#ifndef MACHINE_H
#define MACHINE_H
#include<iostream>
#include<string>

using namespace std;

class Machine{
    string model;
    int day, month, year;

    protected:
    void setCreation();

    public:
    Machine();
    Machine(string model);
    ~Machine();
    void dataOfCreation();
    void setModel(string model);
    string getModel();
    //void setCreation();
};



#endif