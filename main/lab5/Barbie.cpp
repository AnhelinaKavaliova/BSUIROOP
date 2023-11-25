#include "Barbie.h"

using namespace std;
int Barbie :: id = 5;

Barbie :: Barbie(){
    setCount(0);
}


Barbie :: Barbie(int count){
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

Barbie :: ~Barbie(){
    /*cout << "Barbie destructor"<<endl;*/
}

int Barbie :: geValId(){
    return valId;
}

void Barbie :: getAccessories(){
    cout << "Accessories: glasses, gloves, shoes" << endl;
}

// void Barbie :: displayInfo(){
//     Toy :: displayInfo();
//     getAccessories();
// }
void Barbie :: changeID(int newID){
    id += newID;
}