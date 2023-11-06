#include "BoardGame.h"

using namespace std;

BoardGame :: BoardGame(int count){
    this -> count = count;
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

