#ifndef SET_H
#define SET_H

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


    void operator&(const Set& other);
    void operator|(const Set& other);
};

#endif