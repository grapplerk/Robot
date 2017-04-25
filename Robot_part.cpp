
#include "Robot_part.h"
#include <string>


double Robot_part::cost() const {
    return _cost;
}

string Robot_part::name() const{
    return _name;
}

double Robot_part::weight() const {
    return _weight;
}


string Robot_part::model_number() const {
    return _model_number;
}

string Robot_part::description() const {
    return _description;
}
