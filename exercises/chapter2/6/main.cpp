// main.cpp -

#include <iostream>
#include "distConvert.h"

int main() {

	std::cout << "Enter the number of light years:" << '\t';

	double lightYears;
	std::cin >> lightYears;

	std::cout << lightYears << " light years = "
				<< lightYearsToAstrUnits(lightYears)
				<< " astronomical units." << '\n';

	// std::cin.get();
	return 0;
}