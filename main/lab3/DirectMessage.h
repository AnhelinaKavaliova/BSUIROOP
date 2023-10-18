#ifndef DIRECTMESSAGE_H
#define DIRECTMASSAGE_H
#include<iostream>
#include<string>

using namespace std;


class DirectMessage{
    string sender, reciever, message;

    public:
    DirectMessage();
    DirectMessage(string sender, string reciever, string message);
    DirectMessage(const DirectMessage& other);
    ~DirectMessage();

    void sendMessage(string sender, string reciever, string message);
    string getMessage();
    string getSender();
    string getReciever();

};



#endif