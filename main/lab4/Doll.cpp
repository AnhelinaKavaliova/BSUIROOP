#include"Doll.h"

using namespace std;

Doll :: Doll(){}
Doll :: ~Doll(){}
void Doll :: setCanSpeak(bool canSpeak){
    this->canSpeak = canSpeak;
}
bool Doll :: getCanSpeak(){
    return canSpeak;
}
void Doll :: sayHello(){
    if(canSpeak){
        cout <<"The doll can speak"<<endl;
    }else cout <<"The doll can't speak"<<endl;
}