#include<iostream>
#include<string>
#include "DirectMessage.h"

using namespace std;

DirectMessage :: DirectMessage(){
    message = "";
    reciever = "";
}

DirectMessage :: DirectMessage(string reciever, string message){
    this->reciever = reciever;
    this->message = message;

}
DirectMessage :: DirectMessage(const DirectMessage& other){
    reciever = other.reciever;
    message = other.message;

}
DirectMessage :: ~DirectMessage(){
    cout << "Destrouctor" << endl;
}

void DirectMessage :: sendMessage(){
    
    cout << "Enter who you want to send message: ";
    cin>>reciever;
    cout<<"Enter your message: ";
    getline(cin,message);
}
string DirectMessage :: getMessage(){
    return message;
}

string DirectMessage :: getReciever(){
    return reciever;
}