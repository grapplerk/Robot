#include <fstream>
#include "Robot_model.h"
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
#include <iostream>
#include <vector>
#include <string>

int index0=0;

int Robot_model::get_model_number(int num){
  return  model_number=num;
    
}

string Robot_model::get_model_name(string name){
    return  model_name=name;
    
}

double Robot_model::get_model_cost(double cost){
   return model_cost=cost;
}
    
bool Robot_model::order_arm(Arm a1){
    if(robot_arm.size ()<2){
        robot_arm.push_back(a1);
        return true;
    }
    else
        return false;
}

string Robot_model::get_arm(int order){
   string robot_arm_index="";
    if(robot_arm.size()<1){
      robot_arm_index= robot_arm[order].get_model_number();
    }
    return robot_arm_index;
    
}

string Robot_model::get_arm_name(int arm_name){
    string name="";
    name=robot_arm[arm_name].get_name();
    return name;
}

string Robot_model::get_arm_number(int arm_name){
    string name="";
    name=robot_arm[arm_name].get_model_number();
    return name;
}


string Robot_model::arms_power(int arm_power){
    string power;
    power=robot_arm[arm_power].get_max_power();
    return power;
    
}


bool Robot_model::order_head(Head h1){
    if(robot_head.size ()<1){
        robot_head.push_back(h1);
        return true;
    }
    else
        return false;
}

string Robot_model::get_head_name(int index){
    string name="";
    name=robot_head[index].get_name();
    return name;
}

string Robot_model::get_head_number(int index){
    string name="";
    name=robot_head[index].get_model_number();
    return name;
}
string Robot_model::get_head_power(int index){
    string power;
    power=robot_head[index].get_power();
    return power;
    
}


bool Robot_model::order_torso(Torso t1){
    if(robot_torso.size ()<1){
        robot_torso.push_back(t1);
        return true;
    }
    else
        return false;
}

string Robot_model::get_locomotor_name(int index){
    string name="";
    name=robot_locomotor[index].get_name();
    return name;
}

string Robot_model::get_locomotor_number(int index){
    string name="";
    name=robot_locomotor[index].get_model_number();
    return name;
}

double Robot_model::get_locomotor_cost(int index){
   double name;
    name=robot_locomotor[index].get_cost();
    return name;
}

double Robot_model::get_locomotor_power(int index,double watt){
    double name;
    name=robot_locomotor[index].get_max_power();
    return name;
}

double Robot_model::get_locomotor_max_speed(int index,double mph){
    double name;
    name=robot_locomotor[index].get_max_power();
    return name;
}



bool Robot_model::order_locomotor(Locomotor l1){
    if(robot_locomotor.size ()<1){
        robot_locomotor.push_back(l1);
        return true;
    }
    else
        return false;
}

void Robot_model::order_battery(Battery b1){
        
    robot_battery.push_back(b1);

}
double Robot_model::get_battery_max(int index){
    double name;
    name=robot_battery[index].get_max_energy();
    return name;
}

string Robot_model::get_battery_name(int index){
    string name="";
    name=robot_battery[index].get_name();
    return name;
}

string Robot_model::get_battery_number(int index){
    string name="";
    name=robot_battery[index].get_model_number();
    return name;
}
double Robot_model::get_battery_energy(int index){
    double name;
    name=robot_battery[index].get_max_energy();
    return name;
}





