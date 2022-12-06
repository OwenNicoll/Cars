#pragma once
#include "Car.h"
class ParkingSpace
{
public:

	ParkingSpace();

	void Park(Car carToPark);
	void Exit(Car car);
	void Print();

	Car car;
	bool parked;


};

