

#include "Gui.h"
#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include <exception>
#include <FL/Fl_Window.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Button.H>
#include"Manager.h"
#include "Shop.h"
#include <stdio.h>


int Gui::get_cmp(int numb){
    string input="Enter an integer for command";
    int result;
    string title;
    
    while(1){
        
        fl_message_title(title.c_str());
        
        fl_message_icon()->label("I");
        
        result = atoi(fl_input(prompt.c_str(), 0));
        
        if (0 <= result && result <= max_int) break;
        
        fl_message_icon()->label("!");
        
        fl_message(error.c_str());
    }
    return result;
}

string Gui::get_string(string name) {
    
    fl_message_title(title.c_str());
    
    fl_message_icon()->label("");
    
    string result{fl_input(prompt.c_str(), 0)};
    
    return name;
}
void Gui::add_cb(Fl_Widget*w, void*p){
    
    
    dialog=new Fl_Window(220,220,"Name");
    number= new Fl_Input(105,10,105,25, "number:");
    number->align(FL_ALIGN_LEFT);
    
    arm= new Fl_Input(105,50,155,25, "Arm:");
    arm->align(FL_ALIGN_LEFT);
    
    head= new Fl_Input(105,90,155,25, "Head:");
    head->align(FL_ALIGN_LEFT);
    
    locomotor= new Fl_Input(105,130,155,25, "Locomotor");
    locomotor->align(FL_ALIGN_LEFT);
    
    torso= new Fl_Input(105,170,105,25, "Torso:");
    torso->align(FL_ALIGN_LEFT);
    
    battery1= new Fl_Input(105,105,1050,25, "Battery1:");
    battery1->align(FL_ALIGN_LEFT);
    battery2= new Fl_Input(105,250,105,25, "Battery2:");
    battery2->align(FL_ALIGN_LEFT);
    battery3=new Fl_Return_Button(125,250,105,25,"Battery3");
    battery3->callback((Fl_Callback*)addpubCB,0);
    
    dialog->end();
    dialog->set_non_modal();
    dialog->show();
}

void Gui::Robot_arm(Fl_Widget*w, void*p){
    
    
    arm_dialog=new Fl_Window(220,220,"Name");
    arm_number= new Fl_Input(105,10,105,25, "number:");
    arm_number->align(FL_ALIGN_LEFT);
    
    arm= new Fl_Input(105,50,155,25, "Arm:");
    arm->align(FL_ALIGN_LEFT);
    
    arm_cost= new Fl_Input(105,90,155,25, "cost:");
    arm_cost>align(FL_ALIGN_LEFT);
    
    arm_desc= new Fl_Input(105,130,155,25, "Description");
    arm_desc->align(FL_ALIGN_LEFT);

    arm_create = new Fl_Return_Button(145, 210, 120, 25, "Create");
    arm_create->callback((Fl_Callback *)create_Robot_arm, 0);
    
    dialog->end();
    dialog->set_non_modal();
    dialog->show();
}

void Gui::Robot_torso(Fl_Widget*w, void*p){
    
    
    torso_dialog=new Fl_Window(220,220,"Name");
    torso_number= new Fl_Input(105,10,105,25, "number:");
    torso_number->align(FL_ALIGN_LEFT);
    
    torso= new Fl_Input(105,50,155,25, "Torso:");
    torso->align(FL_ALIGN_LEFT);
    
    torso_cost= new Fl_Input(105,90,155,25, "cost:");
    torso_cost>align(FL_ALIGN_LEFT);
    
    torso_desc= new Fl_Input(105,130,155,25, "Description");
    torso_desc->align(FL_ALIGN_LEFT);
    
    torso_create = new Fl_Return_Button(145, 210, 120, 25, "Create");
    torso_create->callback((Fl_Callback *)create_Robot_torso, 0);
    
    dialog->end();
    dialog->set_non_modal();
    dialog->show();
}


void Gui::Robot_head(Fl_Widget*w, void*p){
    
    
    head_dialog=new Fl_Window(220,220,"Name");
    head_number= new Fl_Input(105,10,105,25, "number:");
    head_number->align(FL_ALIGN_LEFT);
    
    head= new Fl_Input(105,50,155,25, "Head:");
    head->align(FL_ALIGN_LEFT);
    
    head_cost= new Fl_Input(105,90,155,25, "cost:");
    head_cost>align(FL_ALIGN_LEFT);
    
    head_desc= new Fl_Input(105,130,155,25, "Description");
    head_desc->align(FL_ALIGN_LEFT);
    
    head_create = new Fl_Return_Button(145, 210, 120, 25, "Create");
    head_create->callback((Fl_Callback *)create_Robot_head, 0);
    
    dialog->end();
    dialog->set_non_modal();
    dialog->show();
}


void Gui::Robot_locomotor(Fl_Widget*w, void*p){
    
    
    locomotor_dialog=new Fl_Window(220,220,"Name");
    locomotor_number= new Fl_Input(105,10,105,25, "number:");
    locomotor_number->align(FL_ALIGN_LEFT);
    
    locomotor= new Fl_Input(105,50,155,25, "Locomotor:");
    locomotor->align(FL_ALIGN_LEFT);
    
    locomotor_cost= new Fl_Input(105,90,155,25, "cost:");
    locomotor_cost>align(FL_ALIGN_LEFT);
    
    locomotor_desc= new Fl_Input(105,130,155,25, "Description");
    locomotor_desc->align(FL_ALIGN_LEFT);
    
    locomotor_create = new Fl_Return_Button(145, 210, 120, 25, "Create");
    locomotor_create->callback((Fl_Callback *)create_Robot_locomotor, 0);
    
    dialog->end();
    dialog->set_non_modal();
    dialog->show();
}



void Gui::Robot_battery(Fl_Widget*w, void*p){
    
    
    battery_dialog=new Fl_Window(220,220,"Name");
    battery_number= new Fl_Input(105,10,105,25, "number:");
    battery_number->align(FL_ALIGN_LEFT);
    
    battery= new Fl_Input(105,50,155,25, "Battery:");
    battery->align(FL_ALIGN_LEFT);
    
    battery_cost= new Fl_Input(105,90,155,25, "cost:");
    battery_cost>align(FL_ALIGN_LEFT);
    
    battery_desc= new Fl_Input(105,130,155,25, "Description");
    battery_desc->align(FL_ALIGN_LEFT);
    
    battery_create = new Fl_Return_Button(145, 210, 120, 25, "Create");
    battery_create->callback((Fl_Callback *)create_Robot_locomotor, 0);
    
    dialog->end();
    dialog->set_non_modal();
    dialog->show();
}

void Gui::new_customer(Fl_Widget*w, void*p){
    
    
    customer_dialog=new Fl_Window(220,220,"Name");
    customer_number= new Fl_Input(105,10,105,25, "number:");
    customer_number->align(FL_ALIGN_LEFT);
    
    customer_address= new Fl_Input(105,50,155,25, "Address:");
    customer_address->align(FL_ALIGN_LEFT);

    customer_create = new Fl_Return_Button(145, 210, 120, 25, "Create");
   customer_create->callback((Fl_Callback *)create_customer, 0);
    
    dialog->end();
    dialog->set_non_modal();
    dialog->show();
}

void Gui::new_associate(Fl_Widget*w, void*p){
    
    
    associate_dialog=new Fl_Window(220,220,"Name");
    associate_number= new Fl_Input(105,10,105,25, "number:");
    associate_number->align(FL_ALIGN_LEFT);
    
    associate_create = new Fl_Return_Button(145, 210, 120, 25, "Create");
    associate_create->callback((Fl_Callback *)create_associate, 0);
    
    dialog->end();
    dialog->set_non_modal();
    dialog->show();
}

void Gui::cb_battery(Fl_Widget*w, void*p){
    
    Robot_battery->name();
    Robot_battery->batttery_number();
    Robot_battery->battery_cost();
    Robot_battery->battey_description();
    Robot_battery->power_available();
    Robot_battery->max_energy();
    
    Robot_battery->hide();
}

void Gui::cb_torso(Fl_Widget*w, void*p){
    
    Robot_torso->name();
    Robot_torso->torso_number();
    Robot_torso->torso_cost();
    Robot_torso->torso_description();
    Robot_torso->battery_compartments();
    
    Robot_torso->hide();
}
void Gui::cb_head(Fl_Widget*w, void*p){
    
    Robot_head>name();
    Robot_head->head_number();
    Robot_head->head_cost();
    Robot_head->head_description();
    Robot_head->power_consumed();
    
    Robot_head->hide();
}
void Gui::cb_arm(Fl_Widget*w, void*p){
    
    Robot_arm->name();
    Robot_arm->arm_number();
    Robot_arm->arm_cost();
    Robot_arm->arm_description();
    Robot_arm->power_consumed();
    
    Robot_arm->hide();
}
void Gui::cb_locomotor(Fl_Widget*w, void*p){
    
    Robot_locomotor->name();
    Robot_locomotor->locomotor_number();
    Robot_locomotor->locomotor_cost();
    Robot_locomotor->locomotor_description();
    Robot_locomotor->power_consumed);
    Robot_locomotor->max_rpm();
    
    Robot_locomotor->hide();
}

Fl_Menu_Item Menu[]={
    {"&File", 0,0,0,FL_SUBMENU},
    {"&Quit", FL_ALT + 'q', (Fl_Callback*)QuitCB},
    {0},
    {"&Create",0,0,0,FL_SUBMENU},
    {"&Order",0,(Fl_Callback*)addCB},
    {"&Customer",0,(Fl_Callback*)new_customer},
    {"&Robot Model",0,(Fl_Callback*)new_robot_model,
    {"&Part",0,0,0,FL_SUBMENU},
        { "Battery", 0, (Fl_Callback *)cb_battery },
        { "Torso", 0, (Fl_Callback *)cb_torso},
        { "Arm", 0, (Fl_Callback *)cb_arm },
        { "Locomotor", 0, (Fl_Callback *)cb_locomotor},
        { "Head", 0, (Fl_Callback *)cb_head },
        { 0 },
    {0}
};


}

