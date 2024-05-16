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
