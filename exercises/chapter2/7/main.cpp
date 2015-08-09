// main.cpp -

#include <iostream>
#include "showTime.h"

int main()
{
	std::cout << "Enter the number of hours: ";

	unsigned short hours;
	std::cin >> hours;

	std::cout << "Enter the number of minutes: ";

	unsigned short minutes;
	std::cin >> minutes;

	showTime(hours, minutes);

	// std::cin.get();
	return 0;
}