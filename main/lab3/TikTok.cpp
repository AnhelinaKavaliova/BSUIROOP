#include <iostream>
#include <string>
#include "TikTok.h"

using namespace std;

TikTok :: TikTok(){
    sound = "";
    comments[100] = {};

}
TikTok :: TikTok(string title, string sound){
    setTitle(title);
    this->sound = sound;

}
TikTok :: TikTok(const TikTok& other){
    for(int i = 0; i <100; i++){
        comments[i]=other.comments[i];
    }
    sound = other.sound;
}

TikTok :: ~TikTok(){

}

void TikTok :: setSound(){
    cout << "Enter the sound: ";
    cin.ignore();
    getline(cin, sound);

}
string TikTok :: getSound(){
    return sound;

}
string TikTok :: sendComment(){
    int i = 0;
    if(!comments[0].empty()){
        do{
             i++;
        }while(!comments[i].empty());
    }

    cout<<"Enter your comment: ";
    cin.ignore();
    getline(cin,comments[i]);


}
void TikTok :: readComments(){
    int i = 0, j = 1;
    if(!comments[0].empty()){
        do{
             cout << j << " comment: " << comments[i] << endl;
             i++,j++;
        }while(!comments[i].empty()&& i<100);
    }else cout <<"0 comments here"<<endl;

}