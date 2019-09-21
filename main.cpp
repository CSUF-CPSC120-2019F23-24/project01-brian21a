//Brian Smetana:
//This is a program for setting up a Business Trip Tracker
	#include <iostream>
//to use setw()
	#include <iomanip>
  #include <string>
	int main ()
	{
	std::cout << "Welcome to the Business Trip Tracker!" << std::endl << std::endl;
// we will use the following variables: Location, Days, HotelCost, MealCost, TotalCost
			int Days;
			double HotelCost, MealCost, TotalCost;
      std::string Location; //to use string
    std::cout << "What is the business trip location? ";
    std::cin >> Location;
//asks user for Location
    std::cout << "How Many days will the trip take? ";
    std::cin >> Days;
//asks user for location

		std::cout << "What is the total hotel expense? ";
    std::cout << '$';
		std::cin >> HotelCost;
//HotelCost obtained

		std::cout << " What is the total meal expense? ";
    std::cout << '$';
		std::cin >> MealCost;
//MealCost obtained
TotalCost = MealCost + HotelCost;
//calculates total cost
		std::cout << "Location: " << std::setw(10)  << "Days: " << std::setw(9) << "Hotel expense: " << std::setw(8) << "Meal expense: " << std::setw(7) << "Total expenses: " << std::setw(6) << std::endl;
    std::cout <<  Location << std::setw(10) << Days << std::setw(9) << HotelCost << std::setw(8) << MealCost << std::setw(3) << TotalCost << std::setw(1) << std::endl;
 //formats it correctly

	return 0;
}

