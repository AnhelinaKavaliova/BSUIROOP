#ifndef DIRECTMESSAGE_H
#define DIRECTMASSAGE_H
#include<iostream>
#include<string>

using namespace std;


class DirectMessage{
    string reciever, message;

    public:
    DirectMessage();
    DirectMessage( string reciever, string message);
    DirectMessage(const DirectMessage& other);
    ~DirectMessage();

    void sendMessage();
    string getMessage();
    string getReciever();

};



#endif