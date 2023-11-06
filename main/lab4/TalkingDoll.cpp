#include"TalkingDoll.h"

using namespace std;


TalkingDoll:: TalkingDoll(int count){
    this -> count = count;
    id -= count;
    if(id < 0) throw 0;
    setName("TalkingDoll");
    setPrice(10.99);
    setAgeRestriction(6);
    setCanSpeak(1);
};
TalkingDoll :: ~TalkingDoll(){

}

