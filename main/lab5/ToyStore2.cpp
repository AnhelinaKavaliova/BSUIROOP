#include "ToyStore2.h"
#include<ctime>

using namespace std;


int ToyStore2 :: numbOrder = 0;

ToyStore2 :: ToyStore2(){
    try {
        order[0] = new BoardGame2();
        order[1] = new Car2();
        order[2] = new Barbie2();
        order[3] = new TalkingDoll2();
    } 
    catch (const exception& e) {
        cout<< "Memory allocation failed: " << e.what() << endl;
    }
    randomSetIsOpen();
}
ToyStore2 ::~ToyStore2(){}
void ToyStore2 :: randomSetIsOpen(){
    srand(time(NULL));
    isOpen = rand()%2;
}
bool ToyStore2 :: getIsOpen(){
    return isOpen;
}
void ToyStore2 :: open(){
    isOpen = 1;
}
void ToyStore2 :: close(){
    isOpen = 0;
}
void ToyStore2 :: orderInfo(){
    ifstream inpF;
    string str;
    inpF.open("order.txt");
    if(!inpF.is_open()){
        cerr << "Error opening the file for reading" << endl;
        return;
    } 

    while(getline(inpF, str)){
        cout << str<<endl;
    }
    inpF.close();
    
    
}

void ToyStore2 :: catalog(){
    ofstream outF;
    outF.open("catalog.txt", ios::trunc);
    if(!outF.is_open()){
        cerr << "Error opening the file" << endl;
        return;
    } 
    outF << "Catalog:" << endl;
    outF << setw(17) << "Name" << setw(10) << "Count" << endl;
    outF<<"1." << setw(15) <<"Board games"<<setw(10)<< BoardGame2 :: id <<endl;
    outF<<"2." << setw(15) <<"Cars"<<setw(10)<< Car2 :: id <<endl;
    outF<<"3." << setw(15) <<"Barbie"<<setw(10)<< Barbie2 :: id <<endl;
    outF<<"4." << setw(15) <<"Talking doll"<<setw(10)<< TalkingDoll2 :: id <<endl;
    
    outF.close();

    string str;
    ifstream inpF;
    inpF.open("catalog.txt");
    if(!inpF.is_open()){
        cerr << "Error opening the file for reading" << endl;
        return;
    } 

    while(getline(inpF, str)){
        cout << str<<endl;
    }
    inpF.close();
}

Toy2 ToyStore2 :: getOrder(){

}

void ToyStore2 :: setOrder(Toy2 &toy, int i){
    if(order[i]->getCount() == 0){
        *order[i] = toy;
    }else order[i]->setCount(toy.getCount());

    ofstream outF;
    outF.open("order.txt", ios::trunc);
    if(!outF.is_open()){
        cerr << "Error opening the file" << endl;
        return;
    } 
    outF << setw(15) << "Toy Name:" << setw(10) << "Price:" << setw(20) << "Age Restriction:" << setw(10) << "Count:" << endl;
    for(int i = 0, k = 1; i < 4; i++){
        if(order[i]->getCount() != 0){
            outF << k <<".";
            outF << order[i] <<endl;
            k++;
        }
    }

    outF.close();

}

void ToyStore2 :: deleteOrder(string orderName){
    for(int i = 0; i < 4; i++){
        if(order[i]->getName() == orderName){
            int check = -(order[i]->getCount());
            order[i]->setCount(check);
            cout << "The toy was removed" << endl;
            switch (i)
            {
            case 0:
                BoardGame2 :: id -=check;
                break;
            case 1:
                Car2 :: id -=check;
                break;
            case 2:
                Barbie2 :: id -=check;
                break;
            case 3:
                TalkingDoll2 :: id -=check;
                break;
            default:
                break;
            }
        }
    }
    ofstream outF;
    outF.open("order.txt", ios::trunc);
    if(!outF.is_open()){
        cerr << "Error opening the file" << endl;
        return;
    } 
    outF << setw(15) << "Toy Name:" << setw(10) << "Price:" << setw(20) << "Age Restriction:" << setw(10) << "Count:" << endl;
    for(int i = 0, k = 1; i < 4; i++){
        if(order[i]->getCount() != 0){
            outF << k <<".";
            outF << order[i] <<endl;
            k++;
        }
    }

    outF.close();
}

void ToyStore2 :: searchToy(){
    fstream file;
    file.open("order.bin", ios::trunc | ios::out | ios::binary);
    Toy2 serchinToy;
    for(int i = 0; i < 4; i++){
        if(order[i]->getCount() != 0){
            serchinToy = *order[i];
           file.write(reinterpret_cast<char*>(&serchinToy), sizeof(Toy2));
        }
    }
    file.close();

    ifstream infile;
    infile.open("order.bin", ios::in | ios::binary);
    infile.seekg(0, ios::end);
    int endposition = infile.tellg();
    int n = endposition / sizeof(Toy2);
    cout << "The count of toys: " << n << endl;
    cout << "Enter the toy number: ";
    cin >> n;
    int position = (n - 1) * sizeof(Toy2);
    infile.seekg(position);
    infile.read(reinterpret_cast<char*>(&serchinToy), sizeof(serchinToy));
    serchinToy.displayInfo();
    infile.close();
}

int ToyStore2 :: getNumbOrder(){
    return numbOrder;
}
void ToyStore2 :: incrNumbOrder(){
    numbOrder++;
}
