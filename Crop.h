#ifndef CROP_H
#define CROP_H

#include <iostream>
#include <string>
using namespace std;

class Crop {
    protected:
        string name; // name of the crop
        int grow_stage; // current growth stage of the crop
        int maturity_time; // time it takes for the crop to mature

    public:
        Crop(); // default constructor
        Crop(string crop_name, int grow_time); // constructor with parameters
        void grow(); // function to grow the crop
        void harvest(); // function to harvest the crop
        virtual void print_info(); // function to print information about the crop
};

#endif
