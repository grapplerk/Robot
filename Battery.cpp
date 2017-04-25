
#include "Battery.h"
#include <stdio.h>

ostream& operator<<(ostream& ost, const Battery& battery){
    ost<<"Battery"<<battery.name()<<"(model"<<battery.model_number()<<")"<<"costs $"<<battery.cost()<<"and uses"<<battery.get_power_available()<<"Power"<<endl;
    ost<<battery.description();
    return ost;
}
