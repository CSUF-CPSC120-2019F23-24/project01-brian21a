//Brian Smetana:
//This is a program for setting up a Business Trip Tracker
	#include <iostream>
//to use setw()	
	#include <iomanip> 
	int main ()
	{
	std::cout << "Welcome to the Business Trip Tracker!\n";
// we will use the following variables: Location, Days, HotelCost, MealCost, TotalCost
			int Days;
			double HotelCost, MealCost, TotalCost;
//asks user for location
		std::cout << "What is the business trip location?";
		std::cin >> Location;
		std::string >> Location;
		
		std::cout << "What is the total hotel expense?';
		std::cin >> HotelCost;
//HotelCost obtained
		
		std::cout << " What is the total meal expense?";
		std::cin >> MealCost;
//MealCost obtained
		std::cin >> TotalCost = MealCost + HotelCost;
//calculates total cost
		std::cout << "Location" << std::setw(9) << "Days" << std::setw(10)
  << "Hotel" << std::setw(9) << "Meal" << std::setw(10) << "Total\n";
 //formats it correctly
	}
	
		return 0;
