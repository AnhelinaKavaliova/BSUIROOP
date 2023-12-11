#include "lab6.h"

void Lab6 :: start(){
    bool flag = 1;
    int choice;
    list<MobileApp> appList;
    map<int, MobileApp> appMap;
    unordered_set<MobileApp, MobileAppHash> appSet;

    while(flag){
        do{
            cout << "Choose what you want to do:" << endl;
            cout << "1. Add mobile app" << endl;
            cout << "2. Remove mobile app" << endl;
            cout << "3. Edit mobile app" << endl;
            cout << "4. View all mobile apps" << endl;
            cout << "5. Search mobile app" << endl;
            cout << "6. Sort mobile apps in alphabet order" << endl;
            cout << "7. Add mobile apps to file" << endl;
            cout << "0. Exit" << endl;

            try {
                cin >> choice;
                if (cin.fail()) {
                    throw MyException(); 
                }
            } catch (const MyException& e) {
                cout << "Caught exception: " << e.what() << endl;
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                choice = -1; 
            }

        }while(choice < 0 || choice > 7);

        switch(choice){
            case 1:
                addMobileApp(appList, appMap, appSet);
                break;
            case 2:
                removeMobileApp(appList, appMap, appSet);
                break;
            case 3:
                editMobileApp(appList, appMap, appSet);
                break;
            case 4:
                viewAllMobileApps(appMap);
                break;
            case 5:
                searchMobileApps(appSet);
                break;
            case 6:
                sortMobileApps(appList);
                break;
            case 7:
                addMobileAppsToFile(appSet);
                break;
            case 0:
                flag = 0;
                break;
            
        }
    }

}

void Lab6 :: addMobileApp(list<MobileApp>& appList, map<int, MobileApp>& appMap, unordered_set<MobileApp, MobileAppHash>& appSet){
   MobileApp newApp;
    cin >> newApp;

    
    appList.push_back(newApp);
    //appMap[newApp.getId()] = newApp;
    appMap.insert(pair<int, MobileApp>(newApp.getId(), newApp));
    appSet.insert(newApp);

    cout << "Mobile app added successfully!" << endl;

}
void Lab6 :: removeMobileApp(list<MobileApp>& appList, map<int, MobileApp>& appMap, unordered_set<MobileApp, MobileAppHash>& appSet){
    int id;
    cout << "Enter the ID of the mobile app to remove: ";
    cin >> id;

    
    appList.remove_if([id](MobileApp& app) { return app.getId() == id; });
    appMap.erase(id);

    unordered_set<MobileApp, MobileAppHash>::iterator it = begin(appSet); //appSet.find(MobileApp("", "", 0)); 
    for (; it != appSet.end(); ++it) {
        if (it-> getId() == id) {
            break;
        }
    }
    if (it != appSet.end()) {
        appSet.erase(it);
        cout << "Mobile app removed successfully!" << endl;
    } else {
        cout << "Mobile app with ID " << id << " not found." << endl;
    }

}

void Lab6 :: editMobileApp(list<MobileApp>& appList, map<int, MobileApp>& appMap, unordered_set<MobileApp, MobileAppHash>& appSet) {
    int id;
    cout << "Enter the ID of the mobile app to edit: ";
    cin >> id;

    MobileApp newApp(id);
    cin >> newApp;

    MobileApp* appToEdit = nullptr;
    for (auto& app : appList) {
        if (app.getId() == id) {
        appToEdit = &app;
        break;
        }
    }

    if (appToEdit == nullptr) {
        cout << "Mobile app with ID " << id << " not found." << endl;
        return;
    }

    appSet.erase(*appToEdit);
    *appToEdit = newApp;
    appMap[id] = *appToEdit;
    appSet.insert(*appToEdit);

    cout << "Mobile app edited successfully!" << endl;
    }

void Lab6 :: viewAllMobileApps(map<int, MobileApp>& appMap){
    for (const auto& pair : appMap) {
        cout << pair.second << endl;
    }

}
void Lab6 :: searchMobileApps(unordered_set<MobileApp, MobileAppHash>& appSet){
    string name;
    cout << "Enter the name of the mobile app to search: ";
    cin >> name;

    for (auto it = appSet.begin(); it != appSet.end(); ++it){
    if (it->getName() == name){
        cout << "Mobile app found: " << endl;
        cout << *it << endl;
        return;
        }
    }

    cout << "Mobile app with name " << name << " not found." << endl;

}
void Lab6 :: sortMobileApps(list<MobileApp>& appList){
   appList.sort();

    for (auto& app : appList) {
        app.showName();
        cout << endl;
    } 

}
void Lab6 :: addMobileAppsToFile(unordered_set<MobileApp, MobileAppHash>& appSet){
    ofstream outfile("MobileApps.txt");

    if(!outfile.is_open()){
        cerr << "Error opening the file" << endl;
        return;
    } 

   for (auto& app : appSet) {
     outfile << app << endl;
   }

   cout << "Mobile apps were entered into the file" << endl;

   outfile.close();
}
