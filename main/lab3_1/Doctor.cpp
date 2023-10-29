#include<iostream>
#include<string>
#include"Doctor.h"

using namespace std;

Doctor :: Doctor(){
    specialization = "";
}
Doctor :: Doctor(string name, string specialization){
    setName(name);
    this -> specialization = specialization;
}
Doctor :: ~Doctor(){

}
string Doctor :: getSpecialization(){
    return specialization;
}
void Doctor :: setSpecialization(string specialization){
    this -> specialization = specialization;

}
void Doctor :: outputSpec(){
    if(!specialization.empty()) cout << "Specialization: " << specialization << endl;
    else cout << "Specialization: unknow" << endl;
}