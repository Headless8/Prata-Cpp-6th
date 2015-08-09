// main.cpp

#include <iostream>
#include "tempConvert.h"

int main()
{
	std::cout << "Please enter a Celsius value: ";

	double celsVal;
	std::cin >> celsVal;

	double fahrVal = CelsiusToFahr(celsVal);
	std::cout << celsVal << " degrees Celsius is "
				<< fahrVal << " degrees Fahrenheit." << '\n';
				
	// std::cin.get();
	return 0;
}