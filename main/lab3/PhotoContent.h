#ifndef PHOTOCONTENT_H
#define PHOTOCONTENT_H
#include"Content.h"
#include<iostream>
#include<string>

using namespace std;

class PhotoContent: public virtual Content{
    string description;

    public:
    PhotoContent();
    PhotoContent(string title);
    PhotoContent(const PhotoContent& other);
    ~PhotoContent();

    void addDescription();
    string readDescription();

};



#endif