#include <iostream>
#include <string>
#include "TikTok.h"

using namespace std;

TikTok :: TikTok(){
    sound = "";
    comments[100] = nullptr;

}
TikTok :: TikTok(string title, string sound){
    this->setTitle(title);
    this->sound = sound;

}
TikTok :: TikTok(const TikTok& other){
    

}
TikTok :: ~TikTok(){

}

void TikTok :: setSound(string sound){
    this->sound = sound;

}
string TikTok :: getSound(){
    return sound;

}
string TikTok :: sendComment(string comment){


}
void TikTok :: readComments(){
    for(int i = 0, j = 1; i < 100; i++, j++){
        cout << j << " comment: " << comments[i] << endl;
    }

}