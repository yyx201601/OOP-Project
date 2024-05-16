#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <string>

class Equipment {
private:
    std::string type;
    std::string condition;
    std::string availabilityStatus;

public:
    Equipment(std::string equipType, std::string equipCondition, std::string availStatus);

    void updateCondition(std::string newCondition);

    std::string checkAvailability() const;

    void displayDetails() const;
};

#endif /* EQUIPMENT_H */
