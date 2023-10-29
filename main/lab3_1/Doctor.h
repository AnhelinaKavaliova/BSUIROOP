#ifndef DOCTOR_H
#define DOCTOR_H
#include<iostream>
#include<string>
#include"Human.h"

using namespace std;

class Doctor : virtual public Human{
    string specialization;

    public:
    Doctor();
    Doctor(string name, string specialization);
    ~Doctor();
    string getSpecialization();
    void setSpecialization(string specialization);
    void outputSpec();
};

#endif