#ifndef INSTAGRAM_H
#define INSTAGRAM_H
#include"PhotoContent.h"
#include"TikTok.h"
#include <iostream>
#include <string>

using namespace std;

class Instagram : public TikTok, protected PhotoContent{
    int stories;

    public:
    Instagram();
    Instagram(string title);
    Instagram(const Instagram& other);
    ~Instagram();

    void creatStory(string title, string description);
    int getStoryViews();

};


#endif