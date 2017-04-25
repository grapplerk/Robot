
#ifndef Utility_h
#define Utility_h
#include<string>
#include<iostream>
#include<climits>
#include <stdio.h>
using namespace std;

void skip(){
    if(cin.fail()){
        cin.clear();
    }
}

string to_string(istream& ist){
    string result="";
    getline(ist,result);
    return result;
}

int get_int(istream& ist){
    int result=0;
       ist>>result;
        skip();
        return result;
};

double get_double(istream& ist){
    double result=0;
    ist>>result;
    skip();
    return result;

}


#endif /* Utility_h */
