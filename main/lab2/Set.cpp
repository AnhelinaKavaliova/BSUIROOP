#include<iostream>
#include <limits>
#include "Set.h"

using namespace std;

Set :: Set (){
    set = nullptr;
    size = 0;
}
Set :: Set(int* newSet, int newSize)
{
    size = newSize;

    set = new int[size];
    for(int i = 0; i < size; i++){
        set[i] = newSet[i];
    }
}

Set :: Set(const Set& other){
    size = other.size;
    set = new int[size];

    for (int i = 0; i < size; ++i) {
        set[i] = other.set[i];
    }
}

Set :: ~Set(){
    //cout << "Destructor" << endl;
    delete [] set;
}

void Set :: setArr(const int* newSet, int newSize){

    if(set == nullptr){
        size = newSize;

        set = new int[size];
        for(int i = 0; i < size; i++){
            set[i] = newSet[i];
        }  
    } else cout << "set is fulled";
};


void Set :: setSize(int newSize){
    size = newSize;
}

int* Set :: getMatrix() const {
    return set;
}

int Set :: getSize(){
    return size;
}

void Set :: addElement(int element, int i){
    set[i] = element;
}

void Set :: operator&(const Set& other){

    int n = size + other.size;
    int* result = new int[n];
    int sizeRes = 0;

     for(int i = 0; i < size; i++){
        bool isDuplicate = false;
        for(int j = 0; j< other.size; j++){
             for(int k = 0; k < sizeRes; k++ ){
                if(result[k] == set[i]){
                 isDuplicate = true;
                 break;
                } 
            }
            if(!isDuplicate){
                if(set[i] == other.set[j]){
                    result[sizeRes++] = set[i];
                }

            }
        } 
    }

    if(sizeRes > 0)
    {
        cout << "Intersection: ";
        for(int i = 0; i < sizeRes; i++){
        cout << result[i] << " ";
        }
    } else cout << "There's no intersection here" << endl;
    

    delete[] result;
};

void Set :: printSet(){
    if(set != nullptr){
        for(int i = 0; i < size; i++){
        cout << set[i] <<" ";
        }
    }
}


void Set :: operator|(const Set& other){
    int n = size + other.size;
    int* result = new int[n], flag = 0;
    int sizeRes = 0;
 
    for(int i = 0; i < size; i++){
        bool isDuplicate = false;
        for(int j = 0;j < sizeRes; j++ ){
            if(result[j] == set[i]){
                 isDuplicate = true;
                 break;
            } 
        }
        if(!isDuplicate){
            result[sizeRes++] = set[i];

        }
    }

    for(int i = 0; i < other.size; i++){
        bool isDuplicate = false;
        for(int j = 0;j < sizeRes; j++ ){
            if(result[j] == other.set[i]){
                 isDuplicate = true;
                 break;
            } 
        }
        if(!isDuplicate){
            result[sizeRes++] = other.set[i];
        }
    }

    cout << "Union: ";
    for(int i = 0; i < sizeRes; i++){
        cout << result[i] << " ";
    }
 
    delete[] result;
};

 ostream& operator<<(ostream& os, const Set& set){
    if(set.set != nullptr){
        for(int i = 0; i < set.size; i++){
        os << set.set[i] <<" ";
        }
    }

};

istream& operator>>(istream& is, Set& set){
        //int element;
        set.set = new int[set.size];
        for (int i = 0, k = 1; i < set.size; ++i, k++) {
            cout << "Enter " << k << " number: ";
            is >> set.set[i];
            //set.addElement(element, i);

            is.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        return is;
};
