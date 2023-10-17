#ifndef TIKTOK_H
#define TIKTOK_H
#include"VideoContent.h"
#include"DirectMessage.h"
#include <iostream>
#include <string>

using namespace std;

class TikTok : public VideoContent, protected DirectMessage{
    string sound;
    string comments[100];

    public:
    TikTok();
    TikTok(string title, string sound);
    TikTok(const TikTok& other);
    ~TikTok();

    void setSound(string sound);
    string getSound();
    string sentComment(string comment);
    void readComments();
};


#endif