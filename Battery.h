
#ifndef Battery_h
#define Battery_h
#include "Robot_part.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Battery:public Robot_part{
public:
    Battery(string _name, int _model_number, double _cost,string _description, string _image_filename,string _type, double _weight):name{_name},model_number{_model_number}, cost{_cost}, description{_description},image_filename(_image_filename),type{_type},weight{_weight} {}
private:
    double power_available;
    double max_energy;
    
};


#endif /* Battery_h */
