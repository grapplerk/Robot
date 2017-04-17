//
//  Order.hpp
//  Robot
//
//  Created by Sig Koenigseder on 4/16/17.
//  Copyright © 2017 Sig Koenigseder. All rights reserved.
//

#ifndef Order_h
#define Order_h
#include <stdio.h>
#include "Arm.h"
#include <string>
#include <vector>
#include <stdio.h>
#include "Robot_part.h"
#include "Head.h"
#include "Robot_part.h"
#include "Locomotor.h"
#include "Torso.h"
#include "Battery.h"
#include "Robot_model.h"
#include <stdio.h>
#include "Customer.h"
#include "Sales_Associate.h"

class Order{
    
private:
    int order_number;
    string date;
    string status;
    string customer_name;
public:
    Robot_model order;
    Customer new_customer;
    Sales_Associate coworker;
    double robot_cost(double price);
    double extended_price();
    int set_order_number(int num);
    string set_date(string date);
    string set_status(string status);
    
    int get_order_number();
    string get_date();
    string get_status();
    string get_customer_name(string name);
    
    
    
};

#endif /* Order_hpp */
