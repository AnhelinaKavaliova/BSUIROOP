#include"SurgeonCyborg.h"

SurgeonCyborg :: SurgeonCyborg(){
    setBusy();
    setStatus();
    setCreation();
}
SurgeonCyborg :: SurgeonCyborg(string name, string model){
    setName(name);
    setModel(model);
    setBusy();
    setStatus();
    setCreation();
}
SurgeonCyborg :: ~SurgeonCyborg(){

}
void SurgeonCyborg :: operation(){
    if(getBusy() || getEnergy() == 0) cout << "Surgeon cyborg can't operate now" << endl;
    else cout<<"Surgeon cyborg ready to operate" <<endl;
}

void  SurgeonCyborg :: status(){
    //MedicalCyborg :: status();
    Cyborg :: status();
    setSpecialization(specialization);
    outputSpec();
    checkBusy();
    operation();
}