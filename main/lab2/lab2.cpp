#include<iostream>
#include<ctime>
#include<cstdlib>
#include "lab2.h"
#include "Set.h"

using namespace std;

void randomFilling (Set& sets, int newSize, int j);
void userFilling (Set& sets, int newSize, int j);
void menu (Set* sets, int arrSize);
void intersection_unionSet(Set* sets, int arrSize, int choiceMainMenu);

void Lab2 ::start(){
    cout << "Lab2 started" << endl;
    int flag = 1;
    int choice, arrSize = 2;

    while(flag){
        int newSize;
        Set* sets =  new Set[arrSize];
        do{
            cout << "Choose what you want to do: " << endl;
            cout << "1. Create new sets" << endl;
            cout << "2. Exit" << endl;

            cin >> choice;
        }while(choice < 1 || choice > 2);

        switch(choice){
            case 1:
                cout << "You should create 2 sets" << endl;
                menu(sets, arrSize);
                break;
            case 2: 
                cout << "Program completed";
                flag = 0;
                break;
        }

        delete[] sets;
    }
}

void randomFilling (Set& sets, int newSize, int j){
    srand(time(NULL));
    int* newSet = new int[newSize];

    cout << j << " set: " << endl;
    for(int k = 0; k < newSize; k++){
        newSet[k] = rand()%10 + 1;
        cout << newSet[k] << " ";
    }

    sets.setArr(newSet, newSize);

    delete[] newSet;
}

void userFilling (Set& sets, int newSize, int j){

    int* newSet = new int[newSize];

    for(int i = 0, k = 1; i < newSize; i++, k++){
        cout << "Enter " << k << " number: ";
        cin >> newSet[i];
    }

    cout << j << " set: " << endl;

    for(int i = 0; i < newSize; i++){
        cout << newSet[i] << " ";
        cout << endl;
    }

    sets.setArr(newSet, newSize);

    delete[] newSet;
}

void intersection_unionSet(Set* sets, int arrSize, int choiceMainMenu){
    int k = 0, n = 1;
    if(choiceMainMenu == 2){
        sets[k]&sets[n]; 
    } else sets[k]|sets[n]; 

}


void menu(Set* sets, int arrSize){

    int flag = 1;
    int k = 0, n = 1;

    while(flag){
        int choiceMainMenu;
        do{
            cout << "Choose what to do: "<< endl;
            cout << "1. Create new set" << endl;
            cout << "2. Find the intersection of 2 sets" << endl;
            cout << "3. Find the union of 2 sets" << endl;
            cout << "4. Exit" << endl;

            cin >> choiceMainMenu;
        }while(choiceMainMenu < 1 || choiceMainMenu > 4);

        switch(choiceMainMenu){
            case 1: 
                int choiceCaseOne, newSize;
                cout << "Enter the size of the " << n << " set:" << endl;
                cin >> newSize;
                do{
                    cout << "Choose what to do: "<< endl;
                    cout << "1. Fill the set randomly" << endl;
                    cout << "2. Fill the set yourself" << endl;

                    cin >> choiceCaseOne;
                }while(choiceCaseOne < 1 || choiceCaseOne > 2);

                switch(choiceCaseOne){
                    case 1: 
                        randomFilling (sets[k], newSize, n);
                        k++, n++;
                        break;
                    case 2: 
                        userFilling (sets[k], newSize, n);
                        k++, n++;
                        break;
                }
                break;
            case 2: 
                intersection_unionSet(sets, arrSize, choiceMainMenu);
                break;
            case 3: 
                intersection_unionSet(sets, arrSize, choiceMainMenu);
                break;
            case 4:
                flag = 0;
                break;
        }

    }

}

