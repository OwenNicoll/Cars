#include "Truck.h"

Truck::Truck()
{
}

Truck::Truck(std::string newMake, std::string newModel, float newMileage, float newMpg,float newPetrol, std::string newBedContents, int newWheels, int newCapacity)
	:Vehicle(newMake, newModel, newMileage, newMpg, newPetrol, newWheels, newCapacity)
	,bedContents(newBedContents)
{
}

Truck::~Truck()
{
}

void Truck::Print()
{
	std::cout << "VEHICLE INFO: " << std::endl;
	std::cout << "Make: " << make << std::endl;
	std::cout << "Model: " << model << std::endl;
	std::cout << "Mileage: " << mileage << std::endl;
	std::cout << "MPG: " << mpg << std::endl;
	std::cout << "Petrol: " << petrol << std::endl;
	std::cout << "BedContents: " << bedContents << std::endl;
}

std::string Truck::GetBedContents()
{
	return bedContents;
}

void Truck::SetBedContents(std::string newBedContents)
{
	bedContents = newBedContents;
}
