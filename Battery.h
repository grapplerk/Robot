
#ifndef Battery_h
#define Battery_h
#include "Robot_part.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Battery:public Robot_part{
public:
    Battery(string name, int model_number, double cost,string description, string image_filename,string type, double weight):Robot_part(name,model_number,cost,description,image_filename,type,weight){}

    double get_power_available();
    double get_max_energy();

private:
    double power_available;
    double max_energy;
    
};


#endif /* Battery_h */
