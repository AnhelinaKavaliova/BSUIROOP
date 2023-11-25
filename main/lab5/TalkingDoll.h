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
    TalkingDoll();
    TalkingDoll(int count);
    ~TalkingDoll();
    void getAccessories();
    void changeID(int newID);
};

//int TalkingDoll :: id = 2;

#endif