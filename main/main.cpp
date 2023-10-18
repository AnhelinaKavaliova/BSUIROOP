#include <iostream>
#include "lab1/lab1.h"
#include "lab2/lab2.h"
#include "lab3/lab3.h"


using namespace std;

int main() {
    while (true) {

        int choice;

        do{
            cout << "Choose the lab you want to start:" << endl;
            cout << "1. Lab 1" << endl;
            cout << "2. Lab 2 " << endl;
            cout << "3. Lab 3 " << endl;
            cout << "0. Exit" << endl;

            cin >> choice;

        }while(choice <0 || choice > 3);
        
        switch (choice) {
            case 1:
                {
                    Lab1 lab1;
                    lab1.start(); 
                }
                break;
            case 2:
                {
                    Lab2 lab2;
                    lab2.start(); 
                }
                break;
            case 3:
                {
                    Lab3 lab3;
                    lab3.start(); 
                }
                break;
            case 0:
                cout << "Program completed" << endl;
                return 0;
        }
    }

    return 0;
}
