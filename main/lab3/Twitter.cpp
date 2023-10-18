#include <iostream>
#include <string>
#include "Twitter.h"

using namespace std;

Twitter :: Twitter(){

}
Twitter :: Twitter(string title){

}
Twitter :: Twitter(const Twitter& other){

}
Twitter :: ~Twitter(){

}

void Twitter :: retweet(){
    cout << "Tweet was retweeted"<< endl;
}