/* Calculates the  decimal equivalent of a binary number */
#include <iostream>

int main()
{
	std::cout << "Enter the binary number: ";
	int number;
	std::cin >> number;
	int powerCounter{ 0 };
	int totalSum{ 0 };

	while (number != 0)
	{
		int digit{ number % 10 };
		number /= 10;

		int powered{ 1 };
		int innerPowerCounter{ powerCounter };
		while (innerPowerCounter > 0)
		{
			powered *= 2;
			innerPowerCounter--;
		}
		totalSum += digit * powered;
		powerCounter++;
	}

	std::cout << "Decimal equivalent: " << totalSum << "\n";
}
