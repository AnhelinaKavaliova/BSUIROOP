#include<iostream>
#include<string>
#include "DirectMessage.h"

using namespace std;

DirectMessage :: DirectMessage(){
    sender = "";
    message = "";
    reciever = "";
}

DirectMessage :: DirectMessage(string sender, string reciever, string message){
    this->sender = sender;
    this->reciever = reciever;
    this->message = message;

}
DirectMessage :: DirectMessage(const DirectMessage& other){
    sender = other.sender;
    reciever = other.reciever;
    message = other.message;

}
DirectMessage :: ~DirectMessage(){
    cout << "Destrouctor" << endl;
}

void DirectMessage :: sendMessage(string sender, string reciever, string message){

}
string DirectMessage :: getMessage(){
    return message;
}

string DirectMessage :: getSender(){
    return sender;
}
string DirectMessage :: getReciever(){
    return reciever;
}