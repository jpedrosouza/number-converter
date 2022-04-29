#include "DecimalConverter.h"

int DecimalConverter::decimalToBinary(int decimalNumber)
{

	// Convert decimalNumber to binary

	int binaryNumber = 0;
	int remainder;
	int i = 1;

	while (decimalNumber != 0)
	{
		remainder = decimalNumber % 2;
		binaryNumber = binaryNumber + remainder * i;
		decimalNumber = decimalNumber / 2;
		i = i * 10;
	}

	return binaryNumber;
}
