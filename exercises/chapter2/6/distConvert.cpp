// distConvert.cpp -

#include "distConvert.h"

double lightYearsToAstrUnits(double lightYears)
{
	const double astrUnitsPerLightYear = 63240.0;

	double astrUnits = lightYears * astrUnitsPerLightYear;
	return astrUnits;
}