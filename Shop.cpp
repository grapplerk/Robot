
#include"Manager.h"
#include "Shop.h"
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


void Manager::new_arm(string name, string part_number, double weight, double cost, int power_consumed, string description) {
    _arm(Arm({(name,part_number,weight,cost,power_consumed,description});
        
        vector<Arm>Shop::arms() const(return _arms);
    }
             
void Manager::new_battery(string name, string part_number, double weight,double cost, int max_energy_stored, string description){
                 
_battery(Battery({(name,part_number,weight,cost,max_energy_stored,description});
                     
vector<Battery>Shop::battery() const(return _battery);
                 }
                                  
void Manager::new_torso(string name, string part_number, double weight,double cost, double battery_compartments, string description){
                                      
_torso(Torso({(name,part_number,weight,cost,battery_compartments,description});
                                          
vector<Torso>Shop::toro()const(return _torso);
                                          
                                      }
void Manager:: new_head(string name, string part_number, double weight,double cost, double _power, string description){
                                                       
_head(Head({(name,part_number,weight,cost,power,description})
                                                           
vector<Torso>Shop::head()const(return _head);
                                                           
                                                       }
void Manager::new_locomotor(string name, string part_number, double weight,double cost, int power_consumed, string description);
                                                                  
_locomotor(Locotor({(name,part_number,weight,cost,power_consumed,description});
                                                           
vector<Torso>Shop::Locomotor()const(return _locomotor);
    
vector<Robot_model> Shop::new_model() const {return _models;}
                   
void Shop::new_customer(string name,string number){
    customer.push_back(Customer {name,number});}

vector<Customer>customer::()const(return customer);
    
void Shop::create_order(string name, string part_number, double price,Robot_model& model, Customer& customer, Sales_Associate& sale_associate){
    order.push.back(Order{name,part_number,model,customer,sales_Associate});
    
void Shop::create_model(string name, string part_number, double price,Torso& torso, Head& head, Arm& arm1, Arm& arm2, Locomotor& locomotor,Battery& batterya, Battery& batteryb, Battery& batteryc) {
        
_models.push_back(Robot_model{name, part_number, price,torso, head, arm1, arm2, locomotor,batterya, batteryb, batteryc});}

   }
}
                   

