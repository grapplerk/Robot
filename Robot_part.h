

#ifndef Robot_part_h
#define Robot_part_h

using namespace std;
#include <string>
#include <vector>

class Robot_part{
public:
    Robot_part(string name, int model_number, double cost,string description, string image_filename,string type, double weight):name{name},model_number{model_number}, cost{cost}, description{description},image_filename(image_filename),type{type},weight{weight} {}
    
    string get_name();
    int get_model_number();
    double get_cost();
    string get_description();
    string get_image_filename();
    string get_type();
    double get_weight();
    
protected:
    string name;
    string type;
    int model_number;
    double cost;
    string description;
    string image_filename;
    double weight;
    
    
};
#endif 
