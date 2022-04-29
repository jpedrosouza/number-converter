// NumberConverter.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>

#include "DecimalConverter.h"
#include "BinaryConverter.h"

int main()
{
	DecimalConverter decimalConverter;
	BinaryConverter binaryConverter;

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