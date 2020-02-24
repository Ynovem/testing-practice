#include "converter.h"

int Converter::centuryFromYear(int year)
{
	int result = (year - 1) / 100;
	return result + 1;
}
