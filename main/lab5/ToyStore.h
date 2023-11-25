#ifndef TOYSTORE_H
#define TOYSTORE_H
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include"Car.h"
#include"BoardGame.h"
#include "Barbie.h"
#include"TalkingDoll.h"
#include<exception>
#include <typeinfo>

using namespace std;

class ToyStore{
    //string pathCATALOG = "catalog.txt";
    bool isOpen;
    Toy* order[4];
    static int numbOrder;

    public:
    ToyStore();
    ~ToyStore();
    Toy getOrder();
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
    void setOrder(Toy &toy, int i);
    void deleteOrder(string orderName);
    void searchToy();
};

//string ToyStore :: pathCATALOG = "catalog.txt";

//int ToyStore :: numbOrder = 0;

#endif