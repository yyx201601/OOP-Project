#include "Animal.h"

Animal::Animal() {
    animal_type = "Unknown";
    age = 0;
    health_status = "Unknown";
    maturity_age = 0;
    price = 0;
}

Animal::Animal(string animal_type, int age, string health_status, int maturity_age, float price) 
    : animal_type(animal_type), age(age), health_status(health_status), maturity_age(maturity_age), price(price) {}

void Animal::print_info() const{
    cout << "Animal type: " << animal_type << endl;
    cout << "Age: " << age << endl;
    cout << "Health status: " << health_status << endl;
    cout << "Maturity age: " << maturity_age << endl;
    cout << "Price: " << price << endl;
}

void Animal::feed() {
    cout << "Feeding " << animal_type << endl;
    health_status = "Healthy";
}

void Animal::age_up() {
    age++;
    if (age >= maturity_age) {
        cout << animal_type << " has matured." << endl;
    }
}

string Animal::get_type() {
    return animal_type;
}

int Animal::get_age() const {
    return age;
}
