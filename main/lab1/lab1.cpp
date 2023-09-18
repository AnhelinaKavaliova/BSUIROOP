#include "lab1.h"
#include <iostream>
#include <limits>
#include "MyString.h"


using namespace std;


void Lab1::start() {
    cout << "Lab1 started" << endl;
    char string[200];
    cout << "Enter the string: ";
    cin.getline(string, 200);
    //cin.ignore();

    MyString str(string);
    int flag = 1;
    str.printData();

    //MyString strings[10];
    //int i = 0;

    while(flag){
        int choice;
        do{
            cout<< "Choose what you want to do: "<< endl;
            cout << "1. Remove leading and trailing spaces from a string" << endl;
            cout << "2. Find out the length of a string" << endl;
            cout << "3. Find out if the string is empty" << endl;
            cout << "4. Print the string"<< endl;
            cout << "5. Exit" << endl;

            while (!(cin >> choice)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

        } while(choice > 5 || choice < 1);

        switch (choice)
        {
        case 1:
            str.trim();
            cout << "The string after: ";
            str.printData();
            break;
        case 2:
            cout << "The length: " << str.length() << endl;
            break;
        case 3:
            cout << (str.isEmpty() ? "It's empty" : "It's not empty") << endl;
            break;
        case 4:
            cout << "Your string: ";
            str.printData();
            break;
        case 5:
            cout << "Program completed";
            //strings[i] = str;
            //i++;
            flag = 0;
             break;
        }
    }
}

