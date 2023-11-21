#include"Doll.h"

using namespace std;


Doll :: Doll(){ /*cout <<"Doll constructor"<<endl;*/}
Doll :: ~Doll(){/*cout << "Doll destructor" <<endl;*/}
void Doll :: setCanSpeak(bool canSpeak){
    this->canSpeak = canSpeak;
}
bool Doll :: getCanSpeak(){
    return canSpeak;
}
void Doll :: sayHello(){
    try{
        if(canSpeak) cout <<"Hi!"<<endl;
        else throw "The doll can't speak";
    }
    catch(const char* msg){
        cout << msg <<" - first handler"<<endl;
        throw;
    }
    
}

void Doll :: displayInfo() {
   Toy :: displayInfo();
   getAccessories();
}