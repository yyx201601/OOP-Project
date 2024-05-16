#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Equipment.h"

class Inventory {
private:
    std::vector<Equipment> equipmentList; // Vector to store Equipment objects

public:
    Inventory() {} // Constructor

    // Function to add equipment to the inventory
    void addEquipment(const Equipment& newEquipment);

    // Function to remove equipment from the inventory
    void removeEquipment(int index);

    // Function to update equipment details
    void updateEquipment(int index, const std::string& newCondition, const std::string& newAvailStatus);

    // Function to display inventory
    void displayInventory() const;
};

#endif /* INVENTORY_H */
