// NumberConverter.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>

// Declare functions

int convertBinaryToDecimal(int binaryNumber);
int convertDecimalToBinary(int decimalNumber);

int main()
{
	int option = 0;

	std::cout << "1 - Convert decimal to binary" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "2 - Convert binary to decimal" << std::endl;
	std::cout << "" << std::endl;

	std::cout << "Select one option: ";
	std::cin >> option;
	std::cout << "" << std::endl;


	// Get number from user

	int number = 0;
	int result = 0;

	std::cout << "Enter a number: ";
	std::cin >> number;

	std::cout << "" << std::endl;

	switch (option)
	{
	case 1:
		result = convertDecimalToBinary(number);
			
		std::cout << "Decimal number " << number << " is equivalent to " << result << " in binary." << std::endl;

		break;

	case 2:
		result = convertBinaryToDecimal(number);
			
		std::cout << "Binary number " << number << " is equivalent to " << result << " in decimal." << std::endl;

		break;

	default:
		std::cout << "Invalid option" << std::endl;
		break;
	}
}

// Convert binary to decimal.

int convertBinaryToDecimal(int binaryNumber)
{

	// Print binary number

	std::cout << "Binary number: " << binaryNumber << std::endl;

	int decimalNumber = 0;
	int remainder;
	int i = 1;

	while (binaryNumber != 0)
	{
		remainder = binaryNumber % 10;
		binaryNumber /= 10;
		decimalNumber += remainder * i;
		i *= 2;
	}

	return decimalNumber;
}

// Convert decimal to binary.

int convertDecimalToBinary(int decimalNumber)
{
	int binaryNumber = 0;
	int remainder;
	int i = 1;

	while (decimalNumber != 0)
	{
		remainder = decimalNumber % 2;
		decimalNumber /= 2;
		binaryNumber += remainder * i;
		i *= 10;
	}

	return binaryNumber;
}