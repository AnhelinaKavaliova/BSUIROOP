#include <iostream>
#include <string>
#include<ctime>
#include "Content.h"

using namespace std;

Content :: Content(){
    views = likes = 0;
    title = "";
    myLike =0;
}
Content :: Content(string title){
    this->title = title;
}

Content :: Content(const Content& other){
    likes = other.likes;
    title = other.title;
    views = other.views;
    myLike = other.myLike;
}

Content :: ~Content(){
    //cout << "Destrouctor"<< endl;
}

void Content :: like(){
    if(myLike == 0){
        cout << "You liked it!" << endl; 
        myLike = 1; 
    }else cout << "You unliked it!"<<endl;
    
}
int Content :: getViews(){
    return views;
}
void Content :: getLikes(){
    srand(time(NULL));
    if(likes == 0){
         likes=rand()%1000+1;
    }
    cout <<"The number of likes: " <<likes<<endl;
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
    if(views==0){
        do{
            views=rand()%2000+1;
        }while(views<likes);   
    }
    cout <<"The number of views: " <<views<<endl;

}

void Content :: enterTitle(){
    cout << "Enter the title: ";
    cin.ignore();
    getline(cin, title); 
}

