#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Equipment.h"

class Inventory {
private:
    std::vector<Equipment> equipmentList; // Vector to store Equipment objects

public:
    Inventory() {} // Constructor

    // Function to add equipment to the inventory (purchase)
    void addEquipment(const Equipment& newEquipment);

    // Function to remove equipment from the inventory (sell)
    void removeEquipment(int index);

    // Function to update equipment details
    void updateEquipment(int index, const std::string& newCondition, const std::string& newAvailStatus);

    // Function to display inventory
    void displayInventory() const;

    // Function to purchase new equipment
    void purchaseEquipment();

    // Function to sell equipment
    void sellEquipment();

    // Function to list all available equipment
    void listAvailableEquipment() const;

    // Function to find specific equipment by type
    void findEquipmentByType(const std::string& type) const;
};

#endif /* INVENTORY_H */
