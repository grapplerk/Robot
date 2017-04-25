
#ifndef Manager_h
#define Manager_h
#include <fstream>
#include "Robot_model.h"
#include <string>
#include <vector>
#include <stdio.h>
#include "Sales_Associate.h"
#include "Customer.h"
#include <iostream>
#include"Arm.h"
#include"Torso.h"
#include"Locomotor.h"
#include"Heads.h"
#include"Battery.h"
#include"Utility.h"
#include "Order.h"



class Manager{
public:
    vector<Battery> inst_batteries;
    vector<Arm> inst_arm;
    vector<Torso> inst_torso;
    vector<Heads> inst_head;
    vector<Locomotor> inst_locomotor;
    vector<Robot_model> model;
    
    static string manager_name;
 
    

    
    void new_battery(string name, string part_number, double weight,double cost, int max_energy_stored, string description);
   
    
    void new_arm(string name, string part_number, double weight, double cost, int power_consumed, string description);
    
    
    void new_torso(string name, string part_number, double weight,double cost, double battery_compartments, string description);
    
    
    void new_head(string name, string part_number, double weight,double cost, double _power, string description);
    
    
    void new_locomotor(string name, string part_number, double weight,double cost, int power_consumed, string description);
    
    
    void new_model(string name, string part_number, double price,Torso& torso, Heads& head, Arm& arm1, Arm& arm2, Locomotor& locomotor,Battery& batterya, Battery& batteryb, Battery& batteryc);
    
    
};
#endif /* Manager_h */
