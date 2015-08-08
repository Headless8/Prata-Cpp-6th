// ageConvert.cpp - 

#include "ageConvert.h"

int ageConvert(int ageInYears) {

	int monthsPerYear = 12;
	int ageInMonths = ageInYears * monthsPerYear;
	return ageInMonths;
}