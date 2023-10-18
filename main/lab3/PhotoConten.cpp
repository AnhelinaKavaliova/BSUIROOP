#include<iostream>
#include<string>
#include"PhotoContent.h"

using namespace std;

PhotoContent :: PhotoContent(){
    description = "";

}
PhotoContent :: PhotoContent(string title){
    setTitle(title);

}
PhotoContent :: PhotoContent(const PhotoContent& other){
    description = other.description;

}

PhotoContent :: ~PhotoContent(){

}

void PhotoContent :: addDescription(){
    cout <<"Enter description: " << endl;
    cin.ignore();
    getline(cin,description);

}
string PhotoContent :: readDescription(){
    return description;
}