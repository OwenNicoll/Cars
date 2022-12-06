#pragma once
#include <iostream>
#include <string>
class Vehicle
{
	

public:

	Vehicle();
	Vehicle(std::string newMake, std::string newModel, float newMileage, float newMpg, float newPetrol, int newWheels, int newCapacity);
	~Vehicle();


	// Public functions
	void Print();
		

	void FillTank(int fuel);
	void FillTank();


	// Getters
	std::string GetMake();
	std::string GetModel();
	float GetMileage();
	float GetMPG();
	float GetPetrol();
	int GetNumWheels();
	int GetTankLevel();

	// Setters
	void SetMake(std::string newMake);
	void SetModel();
	void SetMileage(float newMileage);
	void SetMPG();
	void SetPetrol(float newPetrol);
	void SetNumWheels(int newWheels);


protected:
	std::string make;
	std::string model;
	float mileage;
	float mpg;
	float petrol;
	int numWheels;

	int tankLevel;
	int tankCapacity;
};

