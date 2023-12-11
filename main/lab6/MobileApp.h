#ifndef MOBILEAPP_H
#define MOBILEAPP_H
#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

class MobileApp{
    int id;
    string name;
    string description;
    int accessibleAge;

    public:

    static int counter;

    MobileApp();
    MobileApp(int id);
    MobileApp(string name, string description, int accessibleAge);
    ~MobileApp();

    string getName() const;
    void showName();
    void setName(string name);
    string getDescription() const;
    void setDescription(string description);
    int getAccessibleAge() const;
    void setAccessibleAge(int age);
    int getId() const;
    void setId();

    void displayInfo();

    friend istream& operator>>(istream& in, MobileApp& app);
    friend ostream& operator<<(ostream& out, const MobileApp& app);

    bool operator<(const MobileApp& other) const {
        return name < other.name;
    }


    bool operator==(const MobileApp& rhs) const{
    return name == rhs.getName() && description == rhs.getDescription() &&
         accessibleAge == rhs.getAccessibleAge();
}

};


struct MobileAppHash {
  size_t operator()(const MobileApp& app) const noexcept {
    return hash<string>()(app.getName());
  }
};

#endif