#include "Inventory.h"
#include <iostream>

// Function to add equipment to the inventory
void Inventory::addEquipment(const Equipment& newEquipment) {
    equipmentList.push_back(newEquipment);
}

// Function to remove equipment from the inventory
void Inventory::removeEquipment(int index) {
    if (index >= 0 && index < equipmentList.size()) {
        equipmentList.erase(equipmentList.begin() + index);
    }
}

// Function to update equipment details
void Inventory::updateEquipment(int index, const std::string& newCondition, const std::string& newAvailStatus) {
    if (index >= 0 && index < equipmentList.size()) {
        equipmentList[index].updateCondition(newCondition);
        equipmentList[index].setAvailabilityStatus(newAvailStatus);
    }
}

// Function to display inventory
void Inventory::displayInventory() const {
    if (equipmentList.empty()) {
        std::cout << "Inventory is empty." << std::endl;
    } else {
        std::cout << "Inventory:" << std::endl;
        for (size_t i = 0; i < equipmentList.size(); ++i) {
            std::cout << "Equipment " << i + 1 << ":" << std::endl;
            equipmentList[i].displayDetails();
        }
    }
}

// Function to purchase new equipment
void Inventory::purchaseEquipment() {
    std::string type, condition, availabilityStatus;

    // Gather input from the user for new equipment details
    std::cout << "Enter equipment type: ";
    std::cin >> type;
    std::cout << "Enter equipment condition (new/used/damaged): ";
    std::cin >> condition;
    std::cout << "Enter equipment availability status (available/rented/under repair): ";
    std::cin >> availabilityStatus;

    // Create a new Equipment object with the input details
    Equipment newEquipment(type, condition, availabilityStatus);

    // Add the new equipment to the inventory
    addEquipment(newEquipment);

    std::cout << "Equipment purchased and added to inventory." << std::endl;
}

// Function to sell equipment
void Inventory::sellEquipment() {
    int index;

    // Display inventory first
    displayInventory();

    // Get the index of the equipment to be sold from the user
    std::cout << "Enter the index of the equipment to sell: ";
    std::cin >> index;

    // Adjust index for zero-based vector index
    index--;

    // Remove the equipment from the inventory if the index is valid
    if (index >= 0 && index < equipmentList.size()) {
        removeEquipment(index);
        std::cout << "Equipment sold and removed from inventory." << std::endl;
    } else {
        std::cout << "Invalid index. No equipment sold." << std::endl;
    }
}

// Function to list all available equipment
void Inventory::listAvailableEquipment() const {
    bool availableFound = false;
    for (const auto& equip : equipmentList) {
        if (equip.checkAvailability() == "available") {
            equip.displayDetails();
            availableFound = true;
        }
    }
    if (!availableFound) {
        std::cout << "No available equipment found." << std::endl;
    }
}

// Function to find specific equipment by type
void Inventory::findEquipmentByType(const std::string& type) const {
    bool typeFound = false;
    for (const auto& equip : equipmentList) {
        if (equip.getType() == type) {
            equip.displayDetails();
            typeFound = true;
        }
    }
    if (!typeFound) {
        std::cout << "No equipment of type " << type << " found." << std::endl;
    }
}
