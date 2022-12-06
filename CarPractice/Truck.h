#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{

public:
	Truck();
	Truck(std::string newMake, std::string newModel, float newMileage, float newMpg, float newPetrol, std::string newBedContents, int newWheels, int newCapacity);
	~Truck();


	void Print();


	// Getter
	std::string GetBedContents();

	// Setter
	void SetBedContents(std::string newBedContents);


protected:
	std::string bedContents;
};

