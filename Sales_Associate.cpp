

#include "Sales_Associate.h"
#include"Utility.h"
#include <string>
#include <vector>
#include <stdio.h>

Sales_Associate::Sales_Associate(istream & input){
    int temp=-1;
   employee_name =to_string(input);
    
   employee_number =to_string(input);
    
   salary=get_double(input);
    
   temp=get_int(input);
    
}


void Sales_Associate::setter_employee_name(string name){
    employee_name=name;
}

void Sales_Associate::setter_employee_number(int num){
    employee_number=num;
}

void Sales_Associate::request_raise(){
    
    
    
}
