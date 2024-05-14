/*
5. ќрган≥зуйте цикл doЕ while, л≥чильник €кого зм≥нюЇтьс€ в≥д 100 до 200 з кроком 2.
*/
#include <iostream>

int main()
{
	int i = 100;
	do
	{
		std::cout << i << std::endl;
		i += 2;
	} while (i <= 200);

	return 0;
}