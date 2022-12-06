#pragma once
#include "Car.h"
#include "Vehicle.h"



class Driver
{
public:
	Driver();
	Driver(std::string newName, Vehicle* newVehicle);

	void Print();

	void RegisterVehicle(Vehicle* newVehicle);

protected:
	Vehicle* vehiclePtr;
	std::string name;
};

