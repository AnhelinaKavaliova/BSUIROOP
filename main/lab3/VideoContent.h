#ifndef VIDEOCONTENT_H
#define VIDEOCONTENT_H
#include"Content.h"
#include <iostream>
#include <string>

using namespace std;

class VideoContent : public virtual Content{
    double duration;

    public:
    VideoContent();
    VideoContent(string title);
    VideoContent(const VideoContent& other);
    ~VideoContent();

    void playVideo();
    double getDuration();
};


#endif