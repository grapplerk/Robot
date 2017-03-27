#include "Robot_part.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>

#ifndef Head_h
#define Head_h

class Head :public Robot_part{
public:
    
    Head(string name, int model_number, double cost,string description, string image_filename,string type, double weight):Robot_part(name,model_number,cost,description,image_filename,type,weight){}
    
    double get_power();

private:
    double power;
    
};


#endif /* Head_h */
