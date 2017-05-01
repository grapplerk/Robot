

#ifndef Controller_h
#define Controller_h
#include "Gui.h"
#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include <exception>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Button.H>
using namespace std;
#endif /* Gui_h */


class Gui{
    
public:
    int get_cmp(int numb);
    string get_string(string name);
    Fl_Menu_Bar *menu;
    Fl_Window* window ;
    
    void Robot_arm *robot_arm;
    void Robot_battery *robot_battery;
    void Robot_head *robot_head;
    void Robot_locomotor *robot_locomotor;
    void Robot_torso *robot_torso;
    void new_customer *new_Customer;
    void new_associate *new_associate;
    
    Fl_Window *arm_dialog;
    Fl_Input *arm_number;
    Fl_Input *arm_name;
    Fl_Input *arm_cost;
    Fl_Input *arm_description;
    Fl_Input *arm_create;
    
    Fl_Window *toros_dialog;
    Fl_Input *torso_number;
    Fl_Input *torso_name;
    Fl_Input *torso_cost;
    Fl_Input *torso_description;
    Fl_Input *torso_create;

    Fl_Window *head_dialog;
    Fl_Input *head_number;
    Fl_Input *head_name;
    Fl_Input *head_cost;
    Fl_Input *head_description;
    Fl_Input *head_create;

    Fl_Window *locomotor_dialog;
    Fl_Input *locomotor_number;
    Fl_Input *locomotor_name;
    Fl_Input *locomotor_cost;
    Fl_Input *locomotor_description;
    Fl_Input *locomotor_create;


    Fl_Window *battery_dialog;
    Fl_Input *battery_number;
    Fl_Input *battery_name;
    Fl_Input *battery_cost;
    Fl_Input *battery_description;
    Fl_Input *battery_create;

    Fl_Window *customer_dialog;
    Fl_Input *customer_number;
    Fl_Input *customer_address;
    Fl_Input *customer_create;
    
    Fl_Window *associate_dialog;
    Fl_Input *associate_number;
    Fl_Input *associate_create;

    void cb_add(Fl_Widget*,void*);
    void cb_menu(Fl_Widget*,void*);
    void cb_model(Fl_Widget*, void*);
    void cb_button(Fl_Widget*, void*);
    void cb_battery(Fl_Widget*, void*);
    void cb_head(Fl_Widget*, void*);
    void cb_torso(Fl_Widget*, void*);
    void cb_locomo(Fl_Widget*, void*);
    void cb_arm(Fl_Widget*,void*);
    
 
    
   
    
    
    
};
