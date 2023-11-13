#include<iostream>
#include<string>
#include<ctime>
#include"Cyborg.h"

using namespace std;

Cyborg :: Cyborg(){
    setStatus();
    setCreation();
    
}
Cyborg :: Cyborg(string name, string model){
    setName(name);
    setModel(model);
    setStatus();
    setCreation();
}
Cyborg :: ~Cyborg(){}
int Cyborg :: getStrength(){
    
    return strength;
}
int Cyborg :: getEnergy(){
    return energy;
}
int Cyborg :: getSpeed(){
    return speed;
}
    
void Cyborg :: status(){
    cout << "Status:"<<endl;
    cout << "Name: "<<getName()<<endl;
    cout<<"Model: "<<getModel()<<endl;
    cout<<"Strength: "<< strength <<"%"<<endl;
    cout<<"Speed: "<< speed <<"%"<<endl;
    cout<<"Energy: "<< energy <<"%"<<endl;
    dataOfCreation();

}

void Cyborg :: setStatus(){
    srand(time(NULL));
    strength = rand()%100;
    speed = rand()%100;
    energy = rand()%100;

}
