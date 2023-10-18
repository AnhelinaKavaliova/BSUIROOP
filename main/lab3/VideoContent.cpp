#include<iostream>
#include<string>
#include<time.h>
#include "VideoContent.h"

using namespace std;

VideoContent :: VideoContent(){
    duration =0; 
}
VideoContent :: VideoContent(string title){
    srand(time(NULL));
    setTitle(title);
    duration = rand()%100+1;
}
VideoContent :: VideoContent(const VideoContent& other){
    duration = other.duration;

}
VideoContent :: ~VideoContent(){

}

void VideoContent :: playVideo(){
    cout << "You watched the video"<<endl;
    incrementViews();
}

double VideoContent :: getDuration(){
    srand(time(NULL));
    if(duration == 0){
        duration = rand()%100+1;
    }
    return duration;
}