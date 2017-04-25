

#include "Heads.h"
#include<string>
#include <stdio.h>
#include "Robot_part.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& ost, const Heads& head){
    ost<<"Head"<<head.name()<<"(model"<<head.model_number()<<")"<<"costs $"<<head.cost()<<"and uses"<<head.power()<<"watts"<<endl;
    ost<<head.description();
    return ost;
}
