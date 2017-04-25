
#ifndef Shop_h
#define Shop_h
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
#include "Order.h"


#include <stdio.h>

class Shop{
private:
   static vector<Order*> orders;
   static vector<Robot_part*> robot_parts;
   static vector<Robot_model*> robot_models;
   static vector<Customer> customers;
   static vector<Sales_Associate> sales_associates;
public:
    void creat_new_robot_part(Robot_part);
    void creat_new_robot_model(Robot_model);
    void creat_new_customer(Customer);
    void creat_new_sales_associate(Sales_Associate);
    void creat_new_order(Order);
    static void add_part(Robot_part user);
    
    
};

#endif /* Shop_h */
