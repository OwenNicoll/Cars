// CarPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Car.h"
#include "Vehicle.h"
#include"Motorbike.h"
#include "Truck.h"
#include <map>
#include "Driver.h"



int main()
{
    Car car1("Ford", "Focus", 4, 0, 1, 4, 500);
    Truck truck1("Landrover", "defender", 3, 3, 3, "nothing", 1, 1000);

    car1.Print();
    std::cout << std::endl;
    truck1.Print();
    
    Driver driver1("Naw", &truck1);

    driver1.Print();
    
    
    
   

   /* Car ford("Ford", "Focus", 4, 0, 1, 300);
    Car warthog("UNSC", "Warthog", 4, 0, 1, 300);
    Car mongoose("UNSC", "Mongoose", 4, 0, 1, 300);
    Car car4("Ford", "Fiesta", 5, 100, 50, 200);

    
    ford.SetPetrol(20);
    std::cout << "Petrol: " << ford.GetPetrol() << std::endl;*/




    

   // ford.PrintCar();
   // warthog.PrintCar();
   // mongoose.PrintCar();

   // ford.Drive(100);
   // warthog.Drive(50);
   // mongoose.Drive(25);

   // ford.PrintCar();
   // warthog.PrintCar();
   // mongoose.PrintCar();
   // car4.PrintCar();
   // car5.PrintCar();


   // // Create car vector
   // std::vector<Car> carVector;

   // // Add cars to vector
   // carVector.push_back(ford);
   // carVector.push_back(warthog);
   // carVector.push_back(car5);

   // // Loop and print the cars  
   // for (int i = 0; i < carVector.size(); i++)
   // {
   //     carVector[i].PrintCar();
   // }

   //// Create car map
   // std::map<int, Car> carMap;
   // int userNum;
  
   // // Assign numbers to cars
   // carMap[1094] = ford;
   // carMap[2047] = warthog;
   // carMap[2002] = mongoose;

   // // Get number from user
   // std::cout << "Enter serial number: ";
   // std::cin >> userNum;

   //
    
   // // Print corresponding car
   // carMap[userNum].PrintCar(); 




}

