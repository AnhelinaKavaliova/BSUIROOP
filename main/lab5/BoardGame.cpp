#include "BoardGame.h"

using namespace std;

int BoardGame :: id = 2;

BoardGame :: BoardGame(){
    setCount(0);
}
BoardGame :: BoardGame(int count){
    setCount(count);
    id -= count;
    if(id < 0) throw 0;
    setName("BoardGame");
    setPrice(10.99);
    setAgeRestriction(12);
    
};

void BoardGame :: setNumberOfPlayers(int numberOfPlayers){
    this->numberOfPlayers = numberOfPlayers;
}

int BoardGame :: getNumberOfPlayers(){
    return numberOfPlayers;
}

