#include <iostream>
#include <string>
#include<time.h>
#include "Instagram.h"

using namespace std;

Instagram :: Instagram(){

}
Instagram :: Instagram(string title){
    setTitle(title);
}
Instagram :: Instagram(const Instagram& other){

}
Instagram :: ~Instagram(){

}

void Instagram :: creatStory(){
    cout<<"Add title for your story "<< endl;
    enterTitle();

    cout<<"Add description for your story "<<endl;
    addDescription();

    postedStory =1;

}
int Instagram :: getStoryViews(){
    int  views =getViews();
    if(postedStory==1){
        if(views == 0){
            setViews();
        }
    }else cout << "You didn't post the story" <<endl;

    return views;
    
}