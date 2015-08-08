// converter.cpp -

#include <iostream>

int main() {

	std::cout << '\n' << "Enter a number of furlongs: ";

	float furlongs;
	std::cin >> furlongs;

	float yards = furlongs * 220;
	std::cout << furlongs << " furlongs = " << yards << " yards" << '\n';

	// std::cin.get();
	return 0;
}