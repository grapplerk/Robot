

#include <stdio.h>
#include "Torso.h"

ostream& operator<<(ostream& ost, const Torso& torso){
    ost<<"Torso"<<torso.name()<<"(model"<<torso.model_number()<<")"<<"costs $"<<torso.cost()<<"and uses"<<torso.get_battery_compartments()<<"Batteries"<<endl;
    ost<<torso.description();
    return ost;
}

int Torso::get_max_arms(){
    
    return max_arms;
    
}
