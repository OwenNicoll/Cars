#pragma once
#include "Vehicle.h"
#include <string>
class Car : public Vehicle
{
public:

	Car();
	Car(std::string newMake, std::string newModel, float newMileage, float newMpg, float newPetrol, int newWheels, int newCapacity);
	~Car();

	
	


private:
	
	int doors;
	
	int serialNumber;
};

