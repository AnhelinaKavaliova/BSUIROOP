#include"Doll.h"
#include<iostream>
#include<string>

using namespace std;

class TalkingDoll : public Doll{
    public:
    static int Count;
    TalkingDoll(){
        setName("TalkingDoll");
        setPrice(10.99);
        setAgeRestriction(6);
        setCanSpeak(1);
        Count++;
    };

};

int TalkingDoll :: Count = 0;