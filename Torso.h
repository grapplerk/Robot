//
//  Torso.h
//  Robot
//
//  Created by Sig Koenigseder on 3/22/17.
//  Copyright © 2017 Sig Koenigseder. All rights reserved.
//

#ifndef Torso_h
#define Torso_h
#include "Robot_part.h"
#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Torso: public Robot_part{
public:
    Torso(string _name, int _model_number, double _cost,string _description, string _image_filename,string _type, double _weight):name{_name},model_number{_model_number}, cost{_cost}, description{_description},image_filename(_image_filename),type{_type},weight{_weight} {}

private:
    int battery_compartments;
    int max_arms;
    
    
    
};

#endif /* Torso_h */
