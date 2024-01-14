#include "Doll2.h"

using namespace std;


Doll2 :: Doll2(){ /*cout <<"Doll constructor"<<endl;*/}
Doll2 :: ~Doll2(){/*cout << "Doll destructor" <<endl;*/}
void Doll2 :: setCanSpeak(bool canSpeak){
    this->canSpeak = canSpeak;
}
bool Doll2 :: getCanSpeak(){
    return canSpeak;
}
void Doll2 :: sayHello(){
    try{
        if(canSpeak) cout <<"Hi!"<<endl;
        else throw "The doll can't speak";
    }
    catch(const char* msg){
        cout << msg <<" - first handler"<<endl;
        throw;
    }
    
}

void Doll2 :: displayInfo() {
   Toy2 :: displayInfo();
   getAccessories();
}
