#include "Vehicle.h"


Vehicle::Vehicle()
    :make("")
    , model("")
    , mileage()
    , mpg()
    , petrol()
    , numWheels()
    , tankCapacity()
    , tankLevel()
   
{
}


Vehicle::Vehicle(std::string newMake, std::string newModel, float newMileage, float newMpg, float newPetrol, int newWheels, int newCapacity)
    :make(newMake)
    ,model(newModel)
    ,mileage(newMileage)
    ,mpg(newMpg)
    ,petrol(newPetrol)
    ,numWheels(newWheels)
    ,tankCapacity(newCapacity)
{
}


Vehicle::~Vehicle()
{
}

void Vehicle::Print()
{
    std::cout << "VEHICLE INFO: " << std::endl;
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Mileage: " << mileage << std::endl;
    std::cout << "MPG: " << mpg << std::endl;
    std::cout << "Petrol: " << petrol << std::endl;
}

void Vehicle::FillTank(int fuel)
{
    tankLevel += fuel;
    if (tankLevel > tankCapacity)
    {
        tankLevel = tankCapacity;
    }
}

void Vehicle::FillTank()
{
    tankLevel = tankCapacity;
}


// Getters
std::string Vehicle::GetMake()
{
    return make;
}

std::string Vehicle::GetModel()
{
    return model;
}

float Vehicle::GetMileage()
{
    return mileage;
}

float Vehicle::GetMPG()
{
    return mpg;
}

float Vehicle::GetPetrol()
{
    return petrol;
}

int Vehicle::GetNumWheels()
{
    return 0;
}

int Vehicle::GetTankLevel()
{
    return tankLevel;
}

void Vehicle::SetMake(std::string newMake)
{
}

void Vehicle::SetModel()
{
}

// Setters
void Vehicle::SetMileage(float newMileage)
{
    mileage = newMileage;
}

void Vehicle::SetMPG()
{
}

void Vehicle::SetPetrol(float newPetrol)
{
    petrol = newPetrol;
}

void Vehicle::SetNumWheels(int newWheels)
{
}
