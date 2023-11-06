#include "ToyStore.h"
#include<ctime>

using namespace std;

ToyStore :: ToyStore(){
    try {
        order = new Toy[14];
    } 
    catch (const exception& e) {
        cout<< "Memory allocation failed: " << e.what() << endl;
    }
    randomSetIsOpen();
}
ToyStore ::~ToyStore(){}
void ToyStore :: randomSetIsOpen(){
    srand(time(NULL));
    isOpen = rand()%2;
}
bool ToyStore :: getIsOpen(){
    return isOpen;
}
void ToyStore :: open(){
    isOpen = 1;
}
void ToyStore :: close(){
    isOpen = 0;
}
void ToyStore :: orderInfo(){
    cout << "Your order:"<<endl;
    for(int i = 0; i < 14; i++){
        if(order[i].getPrice() > -1 ){
            cout <<(i+1) << ". "<< endl;
            order[i].displayInfo();
        }
    }
}