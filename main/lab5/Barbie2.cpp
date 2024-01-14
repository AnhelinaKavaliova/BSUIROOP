#include "Barbie2.h"

using namespace std;
int Barbie2 :: id = 5;

Barbie2 :: Barbie2(){
    setCount(0);
}


Barbie2 :: Barbie2(int count){
    //cout<<"Barbie constructor"<<endl;
    setCount(count);
    id -= count;
    if(id < 0) throw 0;
    valId = id;
    setName("Barbie");
    setPrice(6.99);
    setAgeRestriction(4);
    setCanSpeak(0);
};

Barbie2 :: ~Barbie2(){
    /*cout << "Barbie destructor"<<endl;*/
}

int Barbie2 :: geValId(){
    return valId;
}

void Barbie2 :: getAccessories(){
    cout << "Accessories: glasses, gloves, shoes" << endl;
}

// void Barbie :: displayInfo(){
//     Toy :: displayInfo();
//     getAccessories();
// }
void Barbie2 :: changeID(int newID){
    id += newID;
}
