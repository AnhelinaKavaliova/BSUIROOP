#include<iostream>
#include<string>
#include"Human.h"

using namespace std;

Human :: Human(){
    name = "";
}
Human :: Human(string name){
    this->name = name;
}
Human :: ~Human(){

}

void Human :: setName(string name){
    this->name = name;
}
string Human :: getName(){
    return name;
    
}
void Human :: speak(){
    if(name.empty()){
        cout << "Hi, can you name me pls?"<<endl;
    }else cout << "Hi, my name is "<<name<<", what's your name?"<<endl;

}