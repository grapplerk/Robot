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
#include "Robot_part.h"
#include "Head.h"
#include "Robot_part.h"
#include "Locomotor.h"
#include "Torso.h"
#include "Battery.h"

class Sales_Associate{
public:
    void setter_employee_name(string name);
    void setter_employee_number(int num);
    void request_raise();
private:
    string employee_name;
    int employee_number;
    
};



#endif /* Sales_Associate_hpp */
