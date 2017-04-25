
#ifndef Heads_h
#define Heads_h
#include<string>
#include <stdio.h>
#include "Robot_part.h"
#include <iostream>
using namespace std;

class Heads: public Robot_part{
public:
    Heads(string name, string model_number, double cost, string description, double power):Robot_part(description, cost, model_number, name),_power{power}{}
    double power()const{return _power;}
private:
    double _power;
    
};

#endif /* Heads_h */
