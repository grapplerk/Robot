//
//  Customer.hpp
//  Robot
//
//  Created by Sig Koenigseder on 4/9/17.
//  Copyright © 2017 Sig Koenigseder. All rights reserved.
//

#ifndef Customer_h
#define Customer_h

#include <stdio.h>
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


class Customer{
private:
    string name;
    string customer_number;
    string phone_number;
    string email_address;
    
    
public:
    Customer(string name,string customer_number,string phone_number,string email_address): name{name},customer_number{customer_number}, phone_number{phone_number},email_address{email_address} {}
    void setter_name(string input);
    void setter_customer_number(string num);
    void setter_phone_number(string phone);
    void setter_email_address(string email);
};





#endif /* Customer_hpp */
