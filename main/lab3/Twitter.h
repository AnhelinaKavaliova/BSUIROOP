#ifndef TWITTER_H
#define TWITTER_H
#include"Instagram.h"
#include <iostream>
#include <string>

using namespace std;

class Twitter : public Instagram{
    int retweets;

    public:
    Twitter();
    Twitter(string title);
    Twitter(const Twitter& other);
    ~Twitter();

   void retweet();
   int amountOfRetweets();
};


#endif