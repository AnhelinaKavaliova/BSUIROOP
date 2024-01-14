#include <iostream>
#include "lab1/lab1.h"
#include "lab2/lab2.h"
//#include "lab3/lab3.h"
#include "lab3_1/lab3_1.h"
#include "lab4/lab4.h"
#include "lab5/lab5.h"
#include "lab6/lab6.h"


using namespace std;

int main() {
    while (true) {

        int choice;

        do{
            cout << "Choose the lab you want to start:" << endl;
            cout << "1. Lab 1" << endl;
            cout << "2. Lab 2 " << endl;
            cout << "3. Lab 3 " << endl;
            cout << "4. Lab 4" << endl;
            cout << "5. Lab 5 " << endl;
            cout << "6. Lab 6 " << endl;
            cout << "0. Exit" << endl;

            cin >> choice;

        }while(choice <0 || choice > 6);
        
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
                    Lab3_1 lab3;
                    lab3.start(); 
                }
                break;
            case 4:
                {
                    Lab4 lab4;
                    lab4.start(); 
                }
                break;
            case 5:
                {
                    Lab5 lab5;
                    lab5.start(); 
                }
                break;
            case 6:
                {
                    Lab6 lab6;
                    lab6.start(); 
                }
                break;
            case 0:
                cout << "Program completed" << endl;
                return 0;
        }
    }

    return 0;
}
