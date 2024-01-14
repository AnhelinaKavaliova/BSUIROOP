#ifndef BOARDGAME2_H
#define BOARDGAME2_H
#include"Toy2.h"
#include<iostream>
#include<string>

using namespace std;

class BoardGame2 : public Toy2{
    int numberOfPlayers;
    //int count;
    public:
    static int id;
    BoardGame2();
    BoardGame2(int count);

    void setNumberOfPlayers(int numberOfPlayers);

    int getNumberOfPlayers();
    void changeID(int newID);

};

//int BoardGame :: id = 2;

#endif