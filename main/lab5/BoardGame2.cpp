#include "BoardGame2.h"

using namespace std;

int BoardGame2 :: id = 2;

BoardGame2 :: BoardGame2(){
    setCount(0);
}
BoardGame2 :: BoardGame2(int count){
    setCount(count);
    id -= count;
    if(id < 0) throw 0;
    setName("BoardGame");
    setPrice(10.99);
    setAgeRestriction(12);
    
};

void BoardGame2 :: setNumberOfPlayers(int numberOfPlayers){
    this->numberOfPlayers = numberOfPlayers;
}

int BoardGame2 :: getNumberOfPlayers(){
    return numberOfPlayers;
}

void BoardGame2 :: changeID(int newID){
    id += newID;
}

