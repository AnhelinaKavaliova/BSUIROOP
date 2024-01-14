#ifndef TALKINGDOLL2_H
#define TALKINGDOLL2_H
#include"Doll2.h"
#include<iostream>
#include<string>

using namespace std;

class TalkingDoll2 : public Doll2{
    //int count;
    public:
    static int id;
    TalkingDoll2();
    TalkingDoll2(int count);
    ~TalkingDoll2();
    void getAccessories();
    void changeID(int newID);
};

//int TalkingDoll :: id = 2;

#endif