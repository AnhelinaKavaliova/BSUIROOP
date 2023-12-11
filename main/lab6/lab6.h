#ifndef LAB6_H
#define LAB6_H
#include "MobileApp.h"
#include "MyException.h"
#include<iostream>
#include<string>
#include<limits>
#include <list>        
#include <map>         
#include <unordered_set> 
#include<fstream>

using namespace std;

class Lab6{
    public:
    void start();
    void addMobileApp(list<MobileApp>& appList, map<int, MobileApp>& appMap, unordered_set<MobileApp, MobileAppHash>& appSet);
    void removeMobileApp(list<MobileApp>& appList, map<int, MobileApp>& appMap, unordered_set<MobileApp, MobileAppHash>& appSet);
    void editMobileApp(list<MobileApp>& appList, map<int, MobileApp>& appMap, unordered_set<MobileApp, MobileAppHash>& appSet);
    void viewAllMobileApps(map<int, MobileApp>& appMap);
    void searchMobileApps(unordered_set<MobileApp, MobileAppHash>& appSet);
    void sortMobileApps(list<MobileApp>& appList);
    void addMobileAppsToFile(unordered_set<MobileApp, MobileAppHash>& appSet);

};

#endif