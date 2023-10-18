#include<iostream>
#include<string>
#include"PhotoContent.h"

using namespace std;

PhotoContent :: PhotoContent(){
    description = "";

}
PhotoContent :: PhotoContent(string title){
    this->setTitle(title);

}
PhotoContent :: PhotoContent(const PhotoContent& other){
    description = other.description;

}

PhotoContent :: ~PhotoContent(){

}

void PhotoContent :: addDescription(){
    cout <<"Enter description: " << endl;
    string newDescription;
    cin >> newDescription;
    this->description = newDescription;

}
string PhotoContent :: readDescription(){
    return description;
}