#ifndef SURGEONCYBORG_H
#define SURGEONCYBORG_H
#include<iostream>
#include<string>
#include"MedicalCyborg.h"

using namespace std;

class SurgeonCyborg : public MedicalCyborg{
    const string specialization = "surgeon";
    public:
    SurgeonCyborg();
    SurgeonCyborg(string name, string model);
    ~SurgeonCyborg();
    void operation();
    void status() override;
};

#endif