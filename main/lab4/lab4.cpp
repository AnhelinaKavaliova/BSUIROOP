#include"lab4.h"

using namespace std;

void termFunc();
void addBoardgame(ToyStore store);

void Lab4 :: start(){
    set_terminate(termFunc);

    ToyStore store;
    try{
        if(!store.getIsOpen()) throw "Store closed!";
        else{
            cout <<"its open"<< endl;
            int flag = 1;
            while(flag){
                int choice;
                store.catalog();
                do{
                    cout << "Choose what to add to order (enter 0 if you want to go out): " ;
                    cin>> choice;
                }while(choice<= 0 ||choice >4);

                switch(choice){
                    case 1:
                        addBoardgame(store);
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                        break;
                    case 0:
                        break;
                }
            }
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

void addBoardgame(ToyStore store){
    int count;
    cout << "How much you want to add: ";
    cin >> count;
    BoardGame game(count);
    store.setOrder(game);
}