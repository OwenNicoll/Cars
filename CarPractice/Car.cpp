#include "Car.h"
#include <iostream>
#include "Vehicle.h"

Car::Car()
    :Vehicle()
{
    std::cout << "Car Constructed \n";
}

Car::Car(std::string newMake, std::string newModel, float newMileage, float newMpg, float newPetrol, int newWheels, int newCapacity)
    :Vehicle(newMake, newModel, newMileage, newMpg, newPetrol, newWheels, newCapacity)  
    
{
}

Car::~Car()
{
    
}
    

