#ifndef TALKINGDOLL_H
#define TALKINGDOLL_H
#include"Doll.h"
#include<iostream>
#include<string>

using namespace std;

class TalkingDoll : public Doll{
    //int count;
    public:
    static int id;
    TalkingDoll(int count);
    ~TalkingDoll();

};

//int TalkingDoll :: id = 2;

#endif