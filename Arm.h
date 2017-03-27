

#ifndef Arm_h
#define Arm_h
#include <stdio.h>
#include "Robot_part.h"
using namespace std;
#include <string>
#include <vector>

class Arm :public Robot_part{
public:
    
    Arm(string name, int model_number, double cost,string description, string image_filename,string type, double weight):Robot_part(name,model_number,cost,description,image_filename,type,weight){}
   
double get_max_power();
    
private:
    double max_power;
    
    
    
    
};




#endif /* Arm_hpp */
