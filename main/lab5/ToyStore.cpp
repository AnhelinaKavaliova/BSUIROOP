#include "ToyStore.h"
#include<ctime>

using namespace std;


int ToyStore :: numbOrder = 0;

ToyStore :: ToyStore(){
    try {
        order[0] = new BoardGame();
        order[1] = new Car();
        order[2] = new Barbie();
        order[3] = new TalkingDoll();
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
    for(int i = 0; i < 4; i++){
        if(order[i]->getCount() != 0){
            order[i]->displayInfo();
        }
    }
    
}

void ToyStore :: catalog(){
    int barbieId = Barbie :: id;
    cout << "Catalog:" << endl;
    cout<<"1. Board games("<< BoardGame :: id <<")" <<endl;
    cout<<"2. Cars("<< Car :: id <<")" <<endl;
    cout<<"3. Barbie("<< barbieId <<")" <<endl;
    cout<<"4. Talking doll("<< TalkingDoll :: id <<")" <<endl;
}

Toy ToyStore :: getOrder(){

}

void ToyStore :: setOrder(Toy &toy, int i){
    if(order[i]->getCount() == 0){
        *order[i] = toy;
    }else order[i]->setCount(toy.getCount());
}
int ToyStore :: getNumbOrder(){
    return numbOrder;
}
void ToyStore :: incrNumbOrder(){
    numbOrder++;
}