#include "Equipment.h"
#include <iostream>

Equipment::Equipment(std::string equipType, std::string equipCondition, std::string availStatus) :
    type(equipType), condition(equipCondition), availabilityStatus(availStatus) {}

void Equipment::updateCondition(std::string newCondition) {
    condition = newCondition;
}

std::string Equipment::checkAvailability() const {
    return availabilityStatus;
}

void Equipment::displayDetails() const {
    std::cout << "Type: " << type << std::endl;
    std::cout << "Condition: " << condition << std::endl;
    std::cout << "Availability: " << availabilityStatus << std::endl;
}


