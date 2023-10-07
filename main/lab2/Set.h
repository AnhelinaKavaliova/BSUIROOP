#ifndef SET_H
#define SET_H
#include <iostream>

class Set {
    int* set;
    int size;

    public:
    Set();
    Set(int* newSet, int newSize);
    Set(const Set& other);
    ~Set(); 

    void setArr(const int* newSet, int newSize);
    int* getMatrix() const;
    void printSet();
    int getSize();
    void setSize(int newSize);
    void addElement(int element, int i);


    void operator&(const Set& other);
    void operator|(const Set& other);
    friend  std::ostream& operator<<( std::ostream& os, const Set& set);
    friend  std::istream& operator>>( std::istream& is,  Set& set);
};

#endif