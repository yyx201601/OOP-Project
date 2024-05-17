#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string animal_type;
    int age;
    string health_status;
    int maturity_age;
    float price;

public:
    Animal(); // default constructor
    Animal(string animal_type, int age, string health_status, int maturity_age, float price); // constructor with parameters

    virtual void print_info() const;
    void feed(); // function to feed the animal and improve health status
    void age_up(); // function to increment the age of the animal

    string get_type();
    int get_age() const;
    string get_health_status() const;
    int get_price();
};

#endif
