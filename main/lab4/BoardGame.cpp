#include"Toy.h"
#include<iostream>
#include<string>

using namespace std;

class BoardGame : public Toy{
    int numberOfPlayers;
    public:
    static int Count;
    BoardGame(){
        setName("BoardGame");
        setPrice(10.99);
        setAgeRestriction(12);
        Count++;
    };

    void setNumberOfPlayers(int numberOfPlayers){
        this->numberOfPlayers = numberOfPlayers;
    }

    int getNumberOfPlayers(){
        return numberOfPlayers;
    }

};

int BoardGame :: Count = 0;