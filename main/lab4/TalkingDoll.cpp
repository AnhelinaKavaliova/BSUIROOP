#include"TalkingDoll.h"

using namespace std;

int TalkingDoll :: id = 2;

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

