
#ifndef Order_h
#define Order_h
#include "Arm.h"
#include <string>
#include <vector>
#include <stdio.h>
#include "Robot_part.h"
#include "Heads.h"
#include "Robot_part.h"
#include "Locomotor.h"
#include "Torso.h"
#include "Battery.h"
#include <stdio.h>
#include "Customer.h"
#include "Sales_Associate.h"

class Order{
private:
    int order_number;
    string date;
    string status;
    double order_price;
public:
    Order(int number,Robot_part);
    int get_order_number(int num);
    string get_date(string date);
    string get_status(string stat);
    double get_order_price(double price);
};









#endif /* Order_hpp */
