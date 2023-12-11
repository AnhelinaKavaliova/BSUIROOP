#include "MobileApp.h"

int MobileApp::counter = 0;

MobileApp :: MobileApp(){
  setId();
}
MobileApp :: MobileApp(int id){
    this->id = id;
}
MobileApp :: MobileApp(string name, string description, int accessibleAge){
    this -> name = name;
    this -> description = description;
    this -> accessibleAge = accessibleAge;

    setId();

}
MobileApp :: ~MobileApp(){

}

string MobileApp :: getName() const{
    return name;

}

void MobileApp :: showName(){
    cout << name;
}
void MobileApp :: setName(string name){
    this -> name = name;
}
string MobileApp :: getDescription() const{
    return description;

}
void MobileApp :: setDescription(string description){
    this -> description = description;
}
int MobileApp :: getAccessibleAge() const{
    return accessibleAge;

}
void MobileApp :: setAccessibleAge(int age){
    this -> accessibleAge = accessibleAge;
}
int MobileApp :: getId() const{
    return id;
}
void MobileApp :: setId(){
    counter++;
    id = counter;
}

void MobileApp :: displayInfo(){
    cout << "App ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Description: " << description << endl;
    cout << "Accessible Age: " << accessibleAge << endl;
}

istream& operator>>(istream& in, MobileApp& app) {
    cout << "Enter app's name: ";
    in >> app.name;
    cout << "Enter app's description: ";
    in.ignore(); 
    getline(in, app.description);
    cout << "Enter accessible age for this app: ";
    in >> app.accessibleAge;

    //app.setId();

    return in;
}

ostream& operator<<(ostream& out, const MobileApp& app) {
    out << "App ID: " << app.getId() << endl;
    out << "Name: " << app.name << endl;
    out << "Description: " << app.description << endl;
    out << "Accessible Age: " << app.accessibleAge << endl;

    return out;
}