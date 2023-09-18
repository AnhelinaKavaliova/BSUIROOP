#include <iostream>
#include "lab1/lab1.h"

using namespace std;

int main() {
    while (true) {

        int choice;

        do{
            cout << "Choose the lab you want to start:" << endl;
            cout << "1. Lab 1" << endl;
            //cout << "2." << endl;
            cout << "0. Exit" << endl;

            cin >> choice;

        }while(choice <0 || choice > 1);
        
        switch (choice) {
            case 1:
                {
                    Lab1 lab1;
                    lab1.start(); 
                }
                break;
            case 0:
                cout << "Program completed" << endl;
                return 0;
        }
    }

    return 0;
}
