
#include <iostream>
#include <vector>
#include <string>
#include "Manager.h"
#include "Robot_part.h"
#include "Heads.h"
#include "Robot_part.h"
#include "Locomotor.h"
#include "Torso.h"
#include "Battery.h"
#include "Robot_model.h"
#include <stdio.h>
#include "Customer.h"
#include "Sales_Associate.h"
#include "Order.h"



void Manager::new_arm(string name, string part_number, double weight, double cost, int power_consumed, string description) {
    string temp;
   temp= robot_arm.push_back(name,part_number,weight,cost,power_consumed,description);
    
}
