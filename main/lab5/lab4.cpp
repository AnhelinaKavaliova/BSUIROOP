#include"lab4.h"

using namespace std;


void termFunc();
void addBoardgame(ToyStore store);
void addCar(ToyStore store);
void addBarbie(ToyStore store);
void addTalkingDoll(ToyStore store);
void menu(ToyStore store);
void orderMenu(ToyStore store);
bool is_inFile(string str);

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
                    //cout.setf(ios::right);
                    //cout.width(50);
                    cout << "Choose what to do: "<<endl;
                    cout << "0. Exit" << endl;
                    cout << "1. Open catalog" <<endl;
                    cout <<"2. Open cart" << endl;
                    //cout.unsetf(ios::right);
                    try {
                        cin >> choice;
                        if (cin.fail()) {
                            throw MyException(); 
                        }
                    } catch (const MyException& e) {
                        cout << "Caught exception: " << e.what() << endl;
                        cin.clear(); 
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                        choice = -1; 
                    }
                }  while(choice < 0 || choice > 2);

                switch(choice){
                    case 1:
                        menu(store);
                        break;
                    case 2:
                        int findAnswear;
                        store.orderInfo();
                        orderMenu(store);
                        cout << "Do you want find something special in your order?" <<endl;
                        cout << "1. Yes     2. No" << endl;
                        cin>>findAnswear;
                        if(findAnswear == 1) store.searchToy();
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
                choice = -1; 
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

void orderMenu(ToyStore store){
    int flag = 1;
    while(flag){
        int choice;
        cout << "Do you want to remove something?: " << endl;
        cout << "1. Yes" << endl;
        cout << "2. Noy" << endl;
        do {
            try {
                cin >> choice;
                if (cin.fail()) {
                    throw MyException(); 
                }
            } catch (const MyException& e) {
                cout << "Caught exception: " << e.what() << endl;
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                choice = -1; 
                cout << "Choose again: ";
            }
        } while (choice < 1 || choice > 2);

        string orderName;
        switch (choice)
        {
        case 1:
            do{
                cout << "Enter the name of the toy: ";
                cin >> orderName;
            }while(!is_inFile(orderName));
            store.deleteOrder(orderName);
            break;
        case 2:
            flag = 0;
            break;
        }
    }

}

void addBoardgame(ToyStore store){
    int flag = 0;
    int count;
    cout << "How much you want to add: ";
    cin >> count;
    try{
        BoardGame game(count);
        store.setOrder(game, flag);
    }
    catch(int){
        BoardGame :: id +=count;
        cout << "We don't have that many board games. Check the catalog to see how many are left"<<endl;
    }
}

void addCar(ToyStore store){
    int flag = 1;
    int count;
    cout << "How much you want to add: ";
    cin >> count;
    try{
        Car car(count);
        store.setOrder(car, flag);
    }
    catch(int){
        Car :: id +=count;
        cout << "We don't have that many cars. Check the catalog to see how many are left"<<endl;
    }
}
void addBarbie(ToyStore store){
    int flag = 2;
    int count;
    cout << "How much you want to add: ";
    cin >> count;
    try{
        Barbie barbie(count);
        store.setOrder(barbie, flag);
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
    int flag = 3;
    int count;
    cout << "How much you want to add: ";
    cin >> count;
    try{
        TalkingDoll talkingdoll(count);
        store.setOrder(talkingdoll, flag);
    }
    catch(int){
        TalkingDoll :: id +=count;
        cout << "We don't have that many talking dolls. Check the catalog to see how many are left"<<endl;
    }

}

bool is_inFile(string str){
    ifstream inpF("order.txt");
    if (inpF.eof()) {
        cout << "End of file reached." << endl;
    }

    if (inpF.fail()) {
        cerr << "Failure while reading data." << endl;
    }

    if (inpF.bad()) {
        cerr << "Critical error in stream operation." << endl;
    }

    if (inpF.good()) {
        cout << "Stream is in good state." << endl;
    } else {
        cout << "Stream is not in good state." << endl;
    }
    if(!inpF.is_open()){
        cerr << "Error opening the file" << endl;
        return false;
    }
    string tmp;
    while(inpF >> tmp){
        if(tmp == str) {
            return true;
        }
    }

    return false;

}
