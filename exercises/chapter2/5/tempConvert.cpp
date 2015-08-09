// tempConvert.cpp

#include "tempConvert.h"

double CelsiusToFahr(
	double aCelsius)
{
	const double CELSFAHR_RATIO = 1.8;
	const int	 SHIFT 			= 32;
	double 		 fahr;

	fahr = CELSFAHR_RATIO * aCelsius + SHIFT;
	return fahr;
}
