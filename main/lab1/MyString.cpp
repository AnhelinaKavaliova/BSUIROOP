#include "MyString.h"
#include <cstring>
#include <iostream>

using namespace std;

MyString::MyString() {
    data = nullptr;
}

MyString::MyString(const char* str) {
    data = new char[strlen(str) + 1];
    strcpy(data, str);
}

MyString::MyString(const MyString& other){
    if(other.data){
        data = new char[strlen(other.data)+1];
        strcpy(data, other.data);
    }else data = nullptr;
}

MyString::~MyString() {
    delete[] data;
}

// void MyString::setData(const char* str){
//     if(data == nullptr){
//          data = new char[strlen(str) + 1];
//         strcpy(data, str);
//     }else{ cout<<"Error. All strings has already been entered" << endl;
//         // int choice;
//         // do{
//         //     cout<<"Error. The string has already been entered" << endl;
//         //     cout<<"Choose what to do: "<< endl;
//         //     cout<<"1. Exit"<< endl;
//         //     cout<<"2. Add this string to object's string"<<endl;
//         //     cout<<"3. Replace object's string with this string"<<endl;

//         //     cin >> choice;

//         // }while(choice > 3 || choice < 1);

//         // switch(choice){
//         //     case 1: break;
//         //     case 2: 
//         //         char* newData = new char[strlen(data)+strlen(str)+1];
//         //         strcpy(newData, data);
//         //         strcat(newData, str);

//         //         delete[] data;
//         //         strcpy(data, newData);
//         //         break;
//         //     case 3: 
//         //         delete[] data;
//         //         strcpy(data, str);
//         // }

//     }
// }

void MyString::trim() {
    if (data == nullptr) {
            return; 
        }

        while (isspace(*data)) {
            data++;
        }

        char* end = data;
        while (*end != '\0') {
            end++;
        }

        end--;
        while (end >= data && isspace(*end)) {
            *end = '\0';
            end--;
        }
}

int MyString::length() const {
    return data ? strlen(data) : 0;
}

bool MyString::isEmpty() const {
    return length() == 0;
}

void MyString::printData() const{
    if (data) {
            cout << data << endl;
        } else {
            cout << "Data is empty." << endl;
        }
}
