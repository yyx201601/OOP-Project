#include "Equipment.h"
#include <iostream>

// Constructor to initialize equipment attributes
Equipment::Equipment(std::string equipType, std::string equipCondition, std::string availStatus) :
    type(equipType), condition(equipCondition), availabilityStatus(availStatus) {}

// Function to update the condition of the equipment
void Equipment::updateCondition(std::string newCondition) {
    condition = newCondition;
}

// Function to set the availability status of the equipment
void Equipment::setAvailabilityStatus(std::string newAvailStatus) {
    availabilityStatus = newAvailStatus;
}

// Function to check the availability status of the equipment
std::string Equipment::checkAvailability() const {
    return availabilityStatus;
}

// Function to display all details of the equipment
void Equipment::displayDetails() const {
    std::cout << "Type: " << type << std::endl;
    std::cout << "Condition: " << condition << std::endl;
    std::cout << "Availability: " << availabilityStatus << std::endl;
}
