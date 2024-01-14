#ifndef TOYSTORE2_H
#define TOYSTORE2_H
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include"Car2.h"
#include"BoardGame2.h"
#include "Barbie2.h"
#include"TalkingDoll2.h"
#include<exception>
#include <typeinfo>

using namespace std;

class ToyStore2{
    //string pathCATALOG = "catalog.txt";
    bool isOpen;
    Toy2* order[4];
    static int numbOrder;

    public:
    ToyStore2();
    ~ToyStore2();
    Toy2 getOrder();
    //ofstream outF;
    void randomSetIsOpen();
    bool getIsOpen();
    void open();
    void close();
    void orderInfo();
    void catalog();
    int getNumbOrder();
    void incrNumbOrder();
    //template <typename T>
    void setOrder(Toy2 &toy, int i);
    void deleteOrder(string orderName);
    void searchToy();
};

//string ToyStore :: pathCATALOG = "catalog.txt";

//int ToyStore :: numbOrder = 0;

#endif