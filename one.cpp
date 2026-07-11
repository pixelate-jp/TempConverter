#include <iostream>

char scaleIn()
{
	std::cout << "Enter scale to convert from: \n";
	char x{};
	std::cin >> x;
	return x;
}

char scaleOut()
{
	std::cout << "Enter scale to convert to: \n";
	char x{};
	std::cin >> x;
	return x;
}

double temp()
{
	std::cout << "Enter Temp: \n";
	double t{};
	std::cin >> t;
	return t;
}

double tempDetails(char x, double y, char z)         //x-Input Scale, y-Temp, z-Output Scale
{
	if (x == 'C' && z == 'K')
	{
		std::cout << "Converting from C to K\n";
		return y + 273.15;
	}

	else if (x == 'K' && z == 'C')
	{
		std::cout << "Converting from K to C\n";
		return y - 273.15;

	}

	else if (x == 'F' && z == 'K')
	{
		std::cout << "Converting from F to K\n";
		return  (y + 459.67) * 0.55;
	}

	else if (x == 'K' && z == 'F')
	{
		std::cout << "Converting from K to F\n";
		return (y - 273.15) * 1.8 + 32;
	}

	else if (x == 'C' && z == 'F')
	{
		std::cout << "Converting from C to F\n";
		return (y * 1.8) + 32;
	}

	else if (x == 'F' && z == 'C')
	{
		std::cout << "Converting from F to C\n";
		return (y - 32) / 1.8;
	}

	else
	{
		std::cout << "Invalid!!!";
		return 7;
	}
}

int main()
{
	std::cout << tempDetails(scaleIn(), temp(), scaleOut());
}
