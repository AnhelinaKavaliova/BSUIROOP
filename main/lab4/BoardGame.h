#ifndef BOARDGAME_H
#define BOARDGAME_H
#include"Toy.h"
#include<iostream>
#include<string>

using namespace std;

class BoardGame : public Toy{
    int numberOfPlayers;
    int count;
    public:
    static int id;
    BoardGame(int count);

    void setNumberOfPlayers(int numberOfPlayers);

    int getNumberOfPlayers();

};

int BoardGame :: id = 2;

#endif