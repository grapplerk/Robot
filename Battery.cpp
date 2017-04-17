//
//  Battery.cpp
//  Robot
//
//  Created by Sig Koenigseder on 3/26/17.
//  Copyright © 2017 Sig Koenigseder. All rights reserved.
//

#include "Battery.h"
#include <stdio.h>

double Battery::get_power_available(){
    
    return power_available;
    
}


double Battery::get_max_energy(){
    return max_energy;
    
}
