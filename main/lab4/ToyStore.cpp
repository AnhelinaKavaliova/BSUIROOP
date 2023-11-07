#include "ToyStore.h"
#include<ctime>

using namespace std;

int ToyStore :: numbOrder = 0;

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
    if(order[0].getPrice()< 0){
        cout << "Your card is empty" << endl;
    }
    else{
        cout << "Your order:"<<endl;
        for(int i = 0; i < 14; i++){
            if(order[i].getPrice() > -1 ){
            cout <<(i+1) << ". "<< endl;
            order[i].displayInfo();
            }
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
void ToyStore :: setOrder(Toy &toy){
    int i = getNumbOrder();
    cout <<  "HELP" << i << endl;
    int flag = 0;
    if(i != 0){
        for(int j = 0; j < 14; j++)
        {
            if(order[j].getName() == toy.getName()){
                cout<<"ERORRREOROEOREOREOROEROER"<<endl;
                i = j;
                order[i].setCount(toy.getCount());
                flag = 1;
                break;
            } 
        }
    } 
    if(!flag) order[i] = toy;
    incrNumbOrder();
}
int ToyStore :: getNumbOrder(){
    return numbOrder;
}
void ToyStore :: incrNumbOrder(){
    numbOrder++;
}