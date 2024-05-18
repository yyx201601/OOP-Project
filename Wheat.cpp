#include "Wheat.h"

Wheat::Wheat(){}

Wheat::Wheat(string crop_name, int grow_time) : Crop(crop_name, grow_time) {}

void Wheat::print_info() {
    cout << "Crop: " << name << endl;
    cout << "Grow stage: " << grow_stage << endl;
    cout << "Maturity time: " << maturity_time << endl;
}