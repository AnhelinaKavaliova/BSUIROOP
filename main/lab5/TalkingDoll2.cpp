#include"TalkingDoll2.h"

using namespace std;

int TalkingDoll2 :: id = 2;

TalkingDoll2 :: TalkingDoll2(){
    setCount(0);
}


TalkingDoll2:: TalkingDoll2(int count){
    setCount(count);
    id -= count;
    if(id < 0) throw 0;
    setName("TalkingDoll");
    setPrice(10.99);
    setAgeRestriction(6);
    setCanSpeak(1);
};
TalkingDoll2 :: ~TalkingDoll2(){

};

void TalkingDoll2 :: getAccessories(){
    cout << "Accessories: bottle, rubber band" << endl;
}

void TalkingDoll2 :: changeID(int newID){
    id += newID;
}


