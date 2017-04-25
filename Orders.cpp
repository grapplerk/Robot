//
//  Order.cpp
//  Robot
//
//  Created by Sig Koenigseder on 4/16/17.
//  Copyright © 2017 Sig Koenigseder. All rights reserved.
//

#include "Orders.h"


int Order::set_order_number(int num){
    return order_number=num;
}

string Order::set_date(string date){
   return date=date;
}

string Order::set_status(string status){
   return status=status;
}

int Order::get_order_number(){
    return order_number;
}

string Order::get_status(){
    return status;
}

string Order::get_date(){
    return date;
}

string Order::get_customer_name(string name){
    return customer_name=name;
}

double Order::robot_cost(double price){
    
    return order.get_model_cost(price);
}

int Order::get_amount(int num){
   return amount=num;
}
