/*
2. Створіть вкладений цикл for, що заповнює нулями масив розміром 10×10.
*/
#include <iostream>

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 0; j < 10; j++)
			std::cout << "0";
		std::cout << std::endl;
	}
	return 0;
}