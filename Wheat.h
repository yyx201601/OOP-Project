#ifndef WHEAT_H
#define WHEAT_H

#include "Crop.h"

class Wheat : public Crop {
public:
    Wheat(); // default constructor
    Wheat(string crop_name, int grow_time); // constructor with parameters
    void print_info() override; // function to print information about the crop
};

#endif