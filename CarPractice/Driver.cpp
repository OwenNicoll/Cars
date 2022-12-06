#include "Driver.h"

Driver::Driver()
	:name("")
	,vehiclePtr(nullptr)
{
}

Driver::Driver(std::string newName, Vehicle* newCar)
	:name(newName)
	, vehiclePtr(newCar)
{
}

void Driver::Print()
{
	std::cout << "Drivers name: " << name << std::endl;
	if (vehiclePtr != nullptr)
	{
		std::cout << "Vehicle model: " << vehiclePtr->GetModel() << std::endl;
	}
}

void Driver::RegisterVehicle(Vehicle* newVehicle)
{
	vehiclePtr = newVehicle;
}
