#include "Motorbike.h"

Motorbike::Motorbike()
{
}

Motorbike::Motorbike(std::string newMake, std::string newModel, float newMileage, float newMpg, float newPetrol, int newWheels, int newCapacity)
	:Vehicle(newMake, newModel, newMileage, newMpg, newPetrol, newWheels, newCapacity)
	
{
}

Motorbike::~Motorbike()
{
}
