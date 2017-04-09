

#ifndef Robot_model_h
#define Robot_model_h
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

class Robot_model{
    
public:
    double max_speed();
    double battery_life;
    string get_model_name(string name);
    int get_model_number(int num);
    double get_model_cost(double cost);
    
    string get_arm_name(int arm_name);
    string get_arm_number(int arm_num);
    string get_arm(int order);
    string arms_power(int arm_power);
    
    string get_head_number(int index);
    string get_head_name(int index);
    string get_head_power(int index);
    
    string get_locomotor_name(int index);
    string get_locomotor_number(int index);
    double get_locomotor_cost(int index);
    double get_locomotor_max_speed(int index,double mph);
    double get_locomotor_power(int index, double watt);
    

    string get_battery_name(int battery_name);
    string get_battery_number(int battery_num);
    double get_battery_max(int index);
    double get_battery_energy(int index);
    
    
    bool order_locomotor(Locomotor);
    bool order_arm(Arm);
    bool order_head(Head);
    void order_battery(Battery);
    bool order_torso(Torso);
    
    

private:
    double model_cost;
    string model_name="name";
    int model_number= 1;
    
    vector<Head> robot_head;
    vector<Locomotor> robot_locomotor;
    vector <Torso> robot_torso;
    vector <Battery> robot_battery;
    vector<Arm> robot_arm;

    
};






#endif /* Robot_model_hpp */
