#include"lab4.h"

using namespace std;

void termFunc();

void Lab4 :: start(){
    set_terminate(termFunc);

    ToyStore store;
    try{
        if(!store.getIsOpen()) throw "Store closed!";
        else{
            cout <<"its open"<< endl;
        }
    }
    catch(int){
        cout <<"int exception"<<endl;
    }
}

void termFunc(){
    cout << "Store closed!" << endl;
    exit(-1);
}