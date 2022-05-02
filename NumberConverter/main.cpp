#include <iostream>
#include <string>

#include "DecimalConverter.h"
#include "BinaryConverter.h"

int main()
{
	// Declare classes

	DecimalConverter decimalConverter;
	BinaryConverter binaryConverter;

	int option = 0;

	// Show menu
	
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

	// Choose action based on user input (option) variable
	// Option 1: Convert decimal to binary
	// Option 2: Convert binary to decimal
	// Other options: Invalid option

	switch (option)
	{
	case 1:
		result = decimalConverter.decimalToBinary(number);
			
		std::cout << "Decimal number " << number << " is equivalent to " << result << " in binary." << std::endl;

		break;

	case 2:
		result = binaryConverter.binaryToDecimal(number);
			
		std::cout << "Binary number " << number << " is equivalent to " << result << " in decimal." << std::endl;

		break;

	default:
		std::cout << "Invalid option" << std::endl;
		break;
	}
}