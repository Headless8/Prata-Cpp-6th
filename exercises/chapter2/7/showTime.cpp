// showTime.cpp -

#include "showTime.h"

void showTime(
	unsigned short aHours,
	unsigned short aMinutes)
{
	std::cout << "Time: "
				<< aHours << ':' << aMinutes
				<< '\n';
}