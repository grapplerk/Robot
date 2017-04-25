//
//  Sales Associate.hpp
//  Robot
//
//  Created by Sig Koenigseder on 4/9/17.
//  Copyright © 2017 Sig Koenigseder. All rights reserved.
//

#ifndef Sales_Associate_h
#define Sales_Associate_h

#include <stdio.h>
#include <stdio.h>
#include "Arm.h"
#include <string>
#include <vector>
#include <stdio.h>


class Sales_Associate{
public:
    Sales_Associate(string,string);
    Sales_Associate(istream& input);
    void setter_employee_name(string name);
    void setter_employee_number(int num);
    void request_raise();
private:
    string employee_name;
    string employee_number;
    double salary;
};



#endif /* Sales_Associate_hpp */
