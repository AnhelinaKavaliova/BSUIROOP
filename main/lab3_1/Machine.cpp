#include<iostream>
#include<string>
#include<windows.h>
#include"Machine.h"

using namespace std;

Machine:: Machine(){
    model ="";
    setCreation();

}
Machine :: Machine(string model){
    this->model = model;
    setCreation();
}

Machine :: ~Machine(){

}
    
void  Machine :: dataOfCreation(){
    cout<<"Data of creation: "<<day<<"."<<month<<"."<<year<<endl;
}
void Machine :: setModel(string model){
    this->model = model;
}
string Machine :: getModel(){
    return model;
}
void Machine :: setCreation(){
    SYSTEMTIME st;
    GetLocalTime(&st);
    day = st.wDay;
    month = st.wMonth;
    year =st.wYear;
}