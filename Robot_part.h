

#ifndef _ROBOT_PART
#define _ROBOT_PART 
#include <string>
#include <iostream>
using namespace std;


class Robot_part{
public:
    Robot_part(string description,double cost, string model_number,string name): _description{description},_cost{cost}, _model_number {model_number}, _name{name} {}
               
   string name() const;
   string model_number() const;
    double cost() const;
    string description()const;
    double weight()const;

protected:
    string _name;
    string _model_number;
    double _cost;
    string _description;
    double _weight;
    
};
#endif 
