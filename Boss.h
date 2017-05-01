

#ifndef Boss_h
#define Boss_h
#include"Customer.h"
#include <stdio.h>
#include <string>
#include <vector>
#endif /* Boss_h */
using namespace std;

class Boss{
    
private:
    string name;
    int number;
    vector<string> sales_associate;
    
    
public:
    string get_name(string name);
    int get_number(int num);
    void raise(string);
    string set_customer(string name, int number);
    vector<Customer>customer() const;
};
