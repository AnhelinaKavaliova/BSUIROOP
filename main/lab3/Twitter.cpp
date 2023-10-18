#include <iostream>
#include <string>
#include "Twitter.h"

using namespace std;

Twitter :: Twitter(){
    retweets = 0;

}
Twitter :: Twitter(string title){
    setTitle(title);

}
Twitter :: Twitter(const Twitter& other){
    retweets=other.retweets;

}
Twitter :: ~Twitter(){

}

void Twitter :: retweet(){
    cout << "Tweet was retweeted"<< endl;
    retweets++;
}

int Twitter :: amountOfRetweets(){
    cout << "You retweeted "<< retweets << " of tweets"<< endl;
    return retweets;

}