#ifndef WHEAT_H
#define WHEAT_H

#include "Crop.h"

class Wheat : public Crop {
public:
    void print_info() override; // function to print information about the crop
};

#endif