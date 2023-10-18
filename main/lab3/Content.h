#ifndef CONTENT_H
#define CONTENT_H
#include <iostream>
#include <string>

using namespace std;

class Content {
    string title;
    int views,likes;

    public:
    Content();
    Content(string title);
    Content(const Content& other);
    ~Content();

    void like();
    int getViews();
    int getLikes();
    void setTitle(string title);
    string getTitle();
    void incrementViews();
    void setViews();
    void enterTitle();


};


#endif