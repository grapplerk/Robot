

#ifndef Order_h
#define Order_h
#include <stdio.h>
#include "Arm.h"
#include <string>
#include <vector>
#include <stdio.h>
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

class Order{
    
private:
    int order_number;
    string date;
    string status;
    string customer_name;
    int amount;
    
public:
    Order(int,Robot_model,string);
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
    int get_amount(int num);
    
    
};

#endif /* Order_hpp */
