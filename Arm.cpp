
#include "Arm.h"
#include<string>
#include <stdio.h>
#include "Robot_part.h"
#include <iostream>


ostream& operator<<(ostream& ost, const Arm& arm){
    ost<<"Arm"<<arm.name()<<"(model"<<arm.model_number()<<")"<<"costs $"<<arm.cost()<<"and uses"<<arm.max_power()<<"watts"<<endl;
    ost<<arm.description();
    return ost;
}

int Arm::power(int rate) {
    return (power_consumed * rate) / 100;
}
int Arm::max_power() const {
    return power_consumed;
}
