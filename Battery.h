
#ifndef Battery_h
#define Battery_h
#include "Robot_part.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Battery:public Robot_part{
public:
    Battery(string name, string model_number, double cost, string description):Robot_part(description, cost, model_number, name),power_available{get_power_available()},max_energy{get_max_energy()}{}

    double get_power_available()const{return power_available;}
    double get_max_energy()const{return max_energy;}

private:
    double power_available;
    double max_energy;
    
};


#endif /* Battery_h */
