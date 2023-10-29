#ifndef MEDICALCYBORG_H
#define MEDICALCYBORG_H
#include<iostream>
#include<string>
#include"Cyborg.h"
#include"Doctor.h"

using namespace std;

class MedicalCyborg : public Cyborg, public Doctor{
    bool busy;

    public:
    MedicalCyborg();
    MedicalCyborg(string name, string model, string specialization);
    ~MedicalCyborg();
    void checkBusy();
    bool getBusy();
    void status() override;
    void setBusy();


};

#endif