#include "BinaryConverter.h"
#include <math.h>


// Convert binaryNumber to decimal.

int BinaryConverter::binaryToDecimal(int binaryNumber)
{
	int decimalNumber = 0;
	int power = 0;
	
	while (binaryNumber != 0)
	{
		int remainder = binaryNumber % 10;
		decimalNumber += remainder * pow(2, power);
		binaryNumber /= 10;
		power++;
	}

	return decimalNumber;
}
