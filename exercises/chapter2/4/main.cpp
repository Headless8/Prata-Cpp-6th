// main.cpp -

#include <iostream>
#include "ageConvert.h"

int main() {

	std::cout << "Enter your age:" << '\t';

	int ageInYears;
	std::cin >> ageInYears;

	std::cout << "Your age in months is "
			<< ageConvert(ageInYears) << ".\n";

	// std::cin.get();
	return 0;
}