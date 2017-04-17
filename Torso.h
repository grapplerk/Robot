

#ifndef Torso_h
#define Torso_h
#include "Robot_part.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Torso: public Robot_part{
public:
    Torso(string name, int model_number, double cost,string description, string image_filename,string type, double weight):Robot_part(name,model_number,cost,description,image_filename,type,weight){}
    
    int get_battery_compartments();
    int get_max_arms();
    
    
private:
    int battery_compartments;
    int max_arms;
    
    
    
};

#endif /* Torso_h */
