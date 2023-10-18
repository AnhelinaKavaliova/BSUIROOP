#include <iostream>
#include <string>
#include<time.h>
#include "Instagram.h"

using namespace std;

Instagram :: Instagram(){

}
Instagram :: Instagram(string title){

}
Instagram :: Instagram(const Instagram& other){

}
Instagram :: ~Instagram(){

}

void Instagram :: creatStory(string title, string description){

}
int Instagram :: getStoryViews(){
    srand(time(NULL));
    stories = rand()%200 - 1;
    return stories;
}