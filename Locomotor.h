

#ifndef Locomotor_h
#define Locomotor_h
#include "Robot_part.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Locomotor: public Robot_part{
public:
    Locomotor(string name, int model_number, double cost,string description, string image_filename,string type, double weight):Robot_part(name,model_number,cost,description,image_filename,type,weight){}
    
   double get_max_power();

private:
    double max_power_locomotor;
};


#endif /* Locomotor_h */
