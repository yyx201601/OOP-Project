#include "Farm.h"
#include "Wheat.h"
#include "Crop.h"
using namespace std;

// Default constructor
Farm::Farm() {
    farm_size = 1;
    available_funds = 1000;
}

// Constructor with parameters
Farm::Farm(int size, float funds) {
    farm_size = size;
    available_funds = funds;
    crop_prices["Wheat"] = 50.0;
}

// Destructor
Farm::~Farm() {
    for (int i = 0; i < crops.size(); i++) {
        delete crops[i];
    }

    for (int i = 0; i < animals.size(); i++) {
        delete animals[i];
    }
}

// Function to plant a crop
void Farm::plant_crop(const string& crop) {
    // Check if the crop is in the crop_prices map
    if (crop_prices.find(crop) != crop_prices.end()) {
        if (available_funds >= crop_prices[crop]) {
            available_funds -= crop_prices[crop];
            cout << crop << " has been planted." << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }
}
 
// Function to harvest a crop
void Farm::harvest_crop(const string& crop) {
    auto it = crops.begin();
    while (it != crops.end()) {
        if ((*it)->get_name() == crop) {
            available_funds += (*it)->get_price();
            delete *it;
            it = crops.erase(it);
            cout << "Harvested " << crop << " crop." << endl;
            return;
        } else {
            ++it;
        }
    }
    cout << "No " << crop << " crop to harvest." << endl;
}

// Function to buy a farm plot
void Farm::buy_farm_plot(int num_plots) {
    // Calculate the cost of the plots
    float cost = num_plots * 500;
    if (available_funds >= cost) {
        farm_size += num_plots; 
        available_funds -= cost;
        cout << "Bought " << num_plots << " new plots. Total plots: " << farm_size << endl;
    } else {
        cout << "Not enough funds to buy " << num_plots << " plots." << endl;
    }
}

// Function to print the farm status
void Farm::print_farm_status(){
    cout << "Farm size: " << farm_size << endl; // Print the farm size
    cout << "Available funds: " << available_funds << endl; // Print the available funds
    // Print the crops and animals
    cout << "Crops: " << endl;
    for (int i = 0; i < crops.size(); i++) {
        crops[i]->print_info();
    }
    cout << "Animals: " << endl;
    for (int i = 0; i < animals.size(); i++) {
        animals[i]->print_info();
    }
}