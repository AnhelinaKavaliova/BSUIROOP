#include"lab3_1.h"
#define SIZE 100

int createHuman(Human& human, int humCount);
int createMachine(Machine& machine, int machCount);
int createCyborg(Cyborg& cyborg, int cybhCount);
int createMedicalCyborg(MedicalCyborg& medicalCyborg, int medCybCount);
int createDoctor(Doctor& doctor , int docCount);
int createSurgeonCyborg(SurgeonCyborg& surgeonCyborg, int surgCybCount);

using namespace std;


void Lab3_1 :: start(){
    Human humans[SIZE];
    Machine machines[SIZE];
    Cyborg cyborgs[SIZE];
    MedicalCyborg medicalCyborgs[SIZE];
    Doctor doctors[SIZE];
    SurgeonCyborg surgeonCyborgs[SIZE];
    int humCount, machCount, cybCount, medCybCount, docCount, surgCybCount;
    humCount = machCount = cybCount = medCybCount = docCount = surgCybCount = 0;

    int flag = 1;
    
    while(flag){
        int choice;
        do{
            cout << "Choose what you want to create: " <<endl;
            cout <<"0. Exit"<<endl;
            cout << "1. Human"<<endl;
            cout << "2. Machine"<<endl;
            cout << "3. Cyborg"<<endl;
            cout <<"4. Medical cyborg"<<endl;
            cout<<"5. Doctor"<<endl;
            cout << "6.Surgeon cyborg"<<endl;

            cin >> choice;
            cin.ignore();

        }while(choice <0 || choice > 6);

        switch(choice){
            case 1:
                humCount = createHuman(humans[humCount], humCount);
                break;
            case 2:
                machCount = createMachine(machines[machCount], machCount);
                break;
            case 3:
                cybCount = createCyborg(cyborgs[cybCount], cybCount);
                break;
            case 4:
                medCybCount = createMedicalCyborg(medicalCyborgs[medCybCount], medCybCount);
                break;
            case 5:
                docCount = createDoctor(doctors[docCount], docCount);
                break;
            case 6:
                surgCybCount = createSurgeonCyborg(surgeonCyborgs[surgCybCount], surgCybCount);
                break;
            case 0:
                flag = 0;
                break;
        }

    }

}


int createHuman(Human& human, int humCount)
{   
    string name;
    cout << "Give the person a name: ";
    getline(cin, name);
    human.setName(name);
    human.speak();
    humCount++;
    return humCount;
}
int createMachine(Machine& machine, int machCount)
{
    string model;
    cout << "Give the machine model: ";
    getline(cin, model);
    machine.setModel(model);

    machine.dataOfCreation();

    machCount++;
    return machCount;
}
int createCyborg(Cyborg& cyborg, int cybhCount)
{
    string name, model;
    cout << "Give the cyborg a name: ";
    getline(cin, name);
    cyborg.setName(name);

    cout << "Give the cyborg model: ";
    getline(cin, model);
    cyborg.setModel(model);

    cyborg.status();

    cybhCount++;
    return cybhCount;
}
int createMedicalCyborg(MedicalCyborg& medicalCyborg, int medCybCount)
{
    string name, model, specialization;

    medicalCyborg.setStatus();
    medicalCyborg.setBusy();

    cout << "Give the cyborg a name: ";
    getline(cin, name);
    medicalCyborg.setName(name);

    cout << "Give the cyborg model: ";
    getline(cin, model);
    medicalCyborg.setModel(model);

    cout << "Give the cyborg specialization: ";
    getline(cin, specialization);
    medicalCyborg.setSpecialization(specialization);

    medicalCyborg.status();
    medCybCount++;
    return medCybCount;
}
int createDoctor(Doctor& doctor , int docCount)
{
    string name;
    cout << "Give the person a name: ";
    getline(cin, name);
    doctor.setName(name);
    doctor.outputSpec();
    docCount++;
    return docCount;
}
int createSurgeonCyborg(SurgeonCyborg& surgeonCyborg, int surgCybCount)
{
    string name, model, specialization;
    surgeonCyborg.setStatus();
    surgeonCyborg.setBusy();

    cout << "Give the cyborg a name: ";
    getline(cin, name);
    surgeonCyborg.setName(name);

    cout << "Give the cyborg model: ";
    getline(cin, model);
    surgeonCyborg.setModel(model);

    surgeonCyborg.status();

    surgCybCount++;
    return surgCybCount;
}