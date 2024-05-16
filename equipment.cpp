#include <iostream>
#include <string>

class Equipment {
private:
    // Type of equipment (e.g., tractor, plow, harvester)
    std::string type;  
    // Condition of the equipment (e.g., new, used, damaged)             
    std::string condition;  
    // Availability status of the equipment (e.g., available, rented, under repair)        
    std::string availabilityStatus; 

public:
    // Constructor to initialize equipment attributes
    Equipment(std::string equipType, std::string equipCondition, std::string availStatus) :
        type(equipType), condition(equipCondition), availabilityStatus(availStatus) {}

    // Function to update the condition of the equipment
    void updateCondition(std::string newCondition) {
        condition = newCondition; // Update the condition to the new value
    }

    // Function to check the availability status of the equipment
    std::string checkAvailability() {
        return availabilityStatus; // Return the availability status
    }

    // Function to display all details of the equipment
    void displayDetails() {
        // Display the type of equipment
        std::cout << "Equipment Type: " << type << std::endl;
        // Display the condition of the equipment                     
        std::cout << "Condition: " << condition << std::endl;
        // Display the availability status                      
        std::cout << "Availability: " << availabilityStatus << std::endl;         
    }
};
