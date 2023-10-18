#include <iostream>
#include <string>
#include<ctime>
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
    cout << "You liked it!" << endl;
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

string Content :: getTitle(){
    return title;
}

void Content :: incrementViews(){
    views++;
}
void Content :: setViews(){
    srand(time(NULL));
    views=rand()%100+1;

}

void Content :: enterTitle(){
    cout << "Enter the title: ";
    getline(cin, title); 
}

