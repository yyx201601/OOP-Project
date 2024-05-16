#ifndef FARM_H
#define FARM_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Animal.h"
#include "Crop.h"

using namespace std;

class Farm {
    protected:
        int farm_size; // size of the farm
        float available_funds; // available funds
        vector<Crop*> crops; // vector to store crops
        vector<Animal*> animals;  // vector to store animals
        map<string, float> crop_prices; // map to store crop prices

    public:
        Farm(); //  default constructor
        Farm(int size, float funds); // constructor with parameters
        ~Farm(); // destructor

        void plant_crop(const string& crop);// function to plant a crop
        void harvest_crop(const string& crop); // function to harvest a crop
        void buy_farm_plot(int num_plots); // function to buy a farm plot
        void print_farm_status(); // function to print the farm status
};

#endif