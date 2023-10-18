#include <iostream>
#include <string>
#include "Content.h"

using namespace std;

Content :: Content(){
    views = likes = 0;
    title = "";
}
Content :: Content(string title){
    this->title = title;
}

Content :: Content(const Content& other){
    likes = other.likes;
    title = other.title;
    views = other.views;
}

Content :: ~Content(){
    cout << "Destrouctor"<< endl;
}

void Content :: like(){
    likes++;
}
int Content :: getViews(){
    return views;
}
int Content :: getLikes(){
    return likes;
}
void Content :: setTitle(string title){
    this->title = title;

}

