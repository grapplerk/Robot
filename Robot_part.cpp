



#include "Robot_part.h"
#include <string>

string Robot_part::get_name(){
    
return name;
}

int Robot_part::get_model_number(){
    return model_number;
    }

double Robot_part::get_cost(){
    return cost;
}

string Robot_part::get_description(){
    return description;
}

string Robot_part::get_image_filename(){
    return image_filename;
}

string Robot_part::get_type(){
    return type;
}

double Robot_part::get_weight(){
    return weight;
}
