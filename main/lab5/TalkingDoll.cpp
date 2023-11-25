#include"TalkingDoll.h"

using namespace std;

int TalkingDoll :: id = 2;

TalkingDoll :: TalkingDoll(){
    setCount(0);
}


TalkingDoll:: TalkingDoll(int count){
    setCount(count);
    id -= count;
    if(id < 0) throw 0;
    setName("TalkingDoll");
    setPrice(10.99);
    setAgeRestriction(6);
    setCanSpeak(1);
};
TalkingDoll :: ~TalkingDoll(){

}

void TalkingDoll :: getAccessories(){
    cout << "Accessories: bottle, rubber band" << endl;
}

void TalkingDoll :: changeID(int newID){
    id += newID;
}

