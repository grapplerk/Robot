
#include "Locomotor.h"
#include<string>
#include <stdio.h>
#include "Robot_part.h"
#include <iostream>


ostream& operator<<(ostream& ost, const Locomotor& locomotor){
    ost<<"Locomotor"<<locomotor.name()<<"(model"<<locomotor.model_number()<<")"<<"costs $"<<locomotor.cost()<<"and uses"<<locomotor.max_speed()<<"watts"<<endl;
    ost<<locomotor.description();
    return ost;
}
    int Locomotor::power(int rate){
        return (power_consumed * rate) / (max_rpm);
    }
    
