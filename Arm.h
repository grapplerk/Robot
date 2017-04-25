

#ifndef Arm_h
#define Arm_h
#include <stdio.h>
#include "Robot_part.h"
using namespace std;
#include <string>
#include <vector>

class Arm : public Robot_part {
public:
    Arm(string name, string model_number, double cost, string description, double power):Robot_part(description, cost, model_number, name),power_consumed{power_consumed}{}
    
    int max_power() const;
    int power(int rate);
protected:
    int power_consumed;

};

#endif /* Arm_h*/
