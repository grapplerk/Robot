

#ifndef Locomotor_h
#define Locomotor_h
#include "Robot_part.h"
#include <iostream>
using namespace std;
#include <string>


class Locomotor: public Robot_part{
public:
    Locomotor(string name, string model_number, double cost, string description):Robot_part(description, cost, model_number, name),power_consumed{power_consumed}, max_rpm{max_rpm} { }

    int power(int rate);
    int max_speed() const;
    int power_consumed;
    int max_rpm;
};





#endif /* Locomotor_h */



