#include<iostream>
#include<string>
#include<ctime>
#include"MedicalCyborg.h"

using namespace std;

MedicalCyborg :: MedicalCyborg(){
    setBusy();
    setStatus();
    setCreation();
}
MedicalCyborg :: MedicalCyborg(string name, string model, string specialization){
    setName(name);
    setModel(model);
    setSpecialization(specialization);
    setBusy();
    setStatus();
    setCreation();
}
MedicalCyborg :: ~MedicalCyborg(){}
void MedicalCyborg :: checkBusy(){
    if(busy) cout << "MedicalCyborg is busy"<<endl;
    else cout << "MedicalCyborg is not busy"<<endl;

}
bool MedicalCyborg :: getBusy(){
    return busy;
}

void MedicalCyborg :: setBusy(){
    srand(time(NULL));
    busy = rand()%2;
}

void  MedicalCyborg :: status(){
    Cyborg :: status();
    outputSpec();
    checkBusy();
}
