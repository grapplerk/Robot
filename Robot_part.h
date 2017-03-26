

#ifndef Robot_part_h
#define Robot_part_h

using namespace std;
#include <string>
#include <vector>

class Robot_part{
public:
    Robot_part(string _name, int _model_number, double _cost,string _description, string _image_filename,string _type, double _weight):name{_name},model_number{_model_number}, cost{_cost}, description{_description},image_filename(_image_filename),type{_type},weight{_weight} {}
    
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
