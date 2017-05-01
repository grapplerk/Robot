
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
   
   static vector<Robot_part*> robot_parts;
   static vector<Robot_model*> robot_models;
   static vector<Customer> customers;
   static vector<Sales_Associate> sales_associates;
    
public:
    
    string sale_date;
    string name;
    string to_string() const;
    vector<Customer>customer() const;
    vector<Order> orders;
    vector <Robot_model>models()const;
    vector <Sales_Associate>sales_associate()const;
    
    void create_order(string name, string part_number, double price,Robot_model& model, Customer& customer, Sales_Associate& sale_associate);
    
    void new_model(string name, string part_number, double price,Torso& torso, Heads& head, Arm& arm1, Arm& arm2, Locomotor& locomotor,Battery& batterya, Battery& batteryb, Battery& batteryc);
    
    void new_sales_associate(string name, string number);
    

    void new_customer(string name, string number);
    void creat_new_robot_part(Robot_part);
    void creat_new_robot_model(Robot_model);
    void creat_new_customer(Customer);
    void creat_new_sales_associate(Sales_Associate);
    void creat_new_order(Order);
    static void add_part(Robot_part user);
    
    
};

#endif /* Shop_h */
