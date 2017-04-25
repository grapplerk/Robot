

#ifndef Torso_h
#define Torso_h
#include "Robot_part.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Torso: public Robot_part{
public:
    Torso(string name, string model_number, double cost, string description):Robot_part(description, cost, model_number, name),battery_compartments{get_battery_compartments()}{}
    
    int get_battery_compartments()const{return battery_compartments;}
    int get_max_arms();
    
    
private:
    int battery_compartments;
    int max_arms;
    
    
    
};
#endif /* Torso_h */
