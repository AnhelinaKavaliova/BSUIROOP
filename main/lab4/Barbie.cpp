#include"Doll.h"
#include<iostream>
#include<string>

using namespace std;

class Barbie : public Doll{
    int count;
    public:
    static int id;
    Barbie(int count){
        cout<<"Barbie constructor"<<endl;
        this -> count = count;
        id -= count;
        if(id < 0) throw 0;
        setName("Barbie");
        setPrice(6.99);
        setAgeRestriction(4);
        setCanSpeak(0);
        this -> count = count;
        id -= count;
    };

    ~Barbie(){
        cout << "Barbie destructor"<<endl;
    }

};

int Barbie :: id = 5;