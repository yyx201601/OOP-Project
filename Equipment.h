#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <string>

class Equipment {
private:
    std::string type;               // Type of equipment (e.g., tractor, plow, harvester)
    std::string condition;          // Condition of the equipment (e.g., new, used, damaged)
    std::string availabilityStatus; // Availability status of the equipment (e.g., available, rented, under repair)

public:
    // Constructor to initialize equipment attributes
    Equipment(std::string equipType, std::string equipCondition, std::string availStatus);

    // Function to update the condition of the equipment
    void updateCondition(std::string newCondition);

    // Function to set the availability status of the equipment
    void setAvailabilityStatus(std::string newAvailStatus);

    // Function to check the availability status of the equipment
    std::string checkAvailability() const;

    // Function to display all details of the equipment
    void displayDetails() const;
};

#endif /* EQUIPMENT_H */

