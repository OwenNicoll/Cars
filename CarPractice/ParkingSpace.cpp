#include "ParkingSpace.h"
#include "Car.h"
#include <iostream>
#include <string>


ParkingSpace::ParkingSpace()
	:car()
	,parked(false)
{
}

void ParkingSpace::Park(Car carToPark)
{
	parked = true;
	car = carToPark;
}

void ParkingSpace::Exit(Car car)
{
	parked = false;
}

void ParkingSpace::Print()
{
	if (parked)
	{
		
	}
	else
	{
		std::cout << "There is no car parked here";
	}
}
