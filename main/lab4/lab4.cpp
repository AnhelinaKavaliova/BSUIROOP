#include"lab4.h"

using namespace std;

void termFunc();
void addBoardgame(ToyStore store);
void addCar(ToyStore store);
void addBarbie(ToyStore store);
void addTalkingDoll(ToyStore store);
void menu(ToyStore store);

void Lab4 :: start(){
    set_terminate(termFunc);

    ToyStore store;
    try{
        if(!store.getIsOpen()) throw "Store closed!";
        else{
            cout <<"its open"<< endl;
            int choice;
            int flag = 1;
            while(flag){
                do{
                    cout << "Choose what to do: "<<endl;
                    cout << "0. Exit" << endl;
                    cout << "1. Open catalog" <<endl;
                    cout <<"2. Open cart" << endl;
                    try {
                        cin >> choice;
                        if (cin.fail()) {
                            throw MyException(); 
                        }
                    } catch (const MyException& e) {
                        cout << "Caught exception: " << e.what() << endl;
                        cin.clear(); 
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                        continue; 
                    }
                }  while(choice < 0 || choice > 2);

                switch(choice){
                    case 1:
                        menu(store);
                        break;
                    case 2:
                        store.orderInfo();
                        break;
                    case 0:
                        flag = 0;
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
void menu(ToyStore store){
    int flag = 1;
    while(flag){
        int choice;
        store.catalog();
        do {
            cout << "Choose what to add to the order (enter 0 to close the catalog): ";
            try {
                cin >> choice;
                if (cin.fail()) {
                    throw MyException(); 
                }
            } catch (const MyException& e) {
                cout << "Caught exception: " << e.what() << endl;
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                continue; 
            }
        } while (choice < 0 || choice > 4);

        switch(choice){
            case 1:
                addBoardgame(store);
                break;
            case 2:
                addCar(store);
                break;
            case 3:
                addBarbie(store);
                break;
            case 4:
                addTalkingDoll(store);
                break;
            case 0:
                flag= 0;
                break;
        }
    }

}
void addBoardgame(ToyStore store){
    int count;
    cout << "How much you want to add: ";
    cin >> count;
    try{
        BoardGame game(count);
        store.setOrder(game);
    }
    catch(int){
        BoardGame :: id +=count;
        cout << "We don't have that many board games. Check the catalog to see how many are left"<<endl;
    }
}

void addCar(ToyStore store){
    int count;
    cout << "How much you want to add: ";
    cin >> count;
    try{
        Car car(count);
        store.setOrder(car);
    }
    catch(int){
        Car :: id +=count;
        cout << "We don't have that many cars. Check the catalog to see how many are left"<<endl;
    }
}
void addBarbie(ToyStore store){
    int count;
    cout << "How much you want to add: ";
    cin >> count;
    try{
        Barbie barbie(count);
        store.setOrder(barbie);
        try{
        barbie.sayHello();
        }
        catch(const char* msg){
            cout << msg <<" - second handler"<<endl;
        }
    }
    catch(int){
        Barbie :: id +=count;
        cout << "We don't have that many barbies. Check the catalog to see how many are left"<<endl;
    }
}
void addTalkingDoll(ToyStore store){
    int count;
    cout << "How much you want to add: ";
    cin >> count;
    try{
        TalkingDoll talkingdoll(count);
        store.setOrder(talkingdoll);
    }
    catch(int){
        TalkingDoll :: id +=count;
        cout << "We don't have that many talking dolls. Check the catalog to see how many are left"<<endl;
    }

}