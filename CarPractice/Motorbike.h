#pragma once
#include "Vehicle.h"
class Motorbike : public Vehicle
{
public:
	Motorbike();
	Motorbike(std::string newMake, std::string newModel, float newMileage, float newMpg, float newPetrol, int newWheels, int newCapacity);
	~Motorbike();
};

