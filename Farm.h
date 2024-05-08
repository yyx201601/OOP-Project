#ifndef FARM_H
#define FARM_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Farm {
    private:
        int farm_size;
        float available_funds;
        vector<string> crops;
        vector<string> animals;
        vector<string> equipment;

    public:
        Farm();
        Farm(int size, float funds);
        void plant_crop(string crop);
        void harvest_crop(string crop);
        void purchase_animal(string animal);
        void purchase_equipment(string equipment);
};

#endif