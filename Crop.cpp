#include "Crop.h"

// Default constructor
Crop::Crop() {
    name = " ";
    grow_stage = 0;
    maturity_time = 0;
}

// Constructor with parameters
Crop::Crop(string crop_name, int grow_time) {
    name = crop_name;
    grow_stage = 0;
    maturity_time = grow_time;
}

void Crop::grow() {
    grow_stage++;
    cout << name << " is growing. Current grow stage: " << grow_stage << endl;
}

void Crop::harvest() {
    // Check if the crop is ready to be harvested
    if (grow_stage >= maturity_time) {
        cout << name << " has been harvested!" << endl;
        grow_stage = 0;
    } else {
        cout << name << " is not ready to be harvested yet." << endl;
    }
}

void Crop::print_info() {
    cout << "Crop: " << name << endl;
    cout << "Grow stage: " << grow_stage << endl;
    cout << "Maturity time: " << maturity_time << endl;
}