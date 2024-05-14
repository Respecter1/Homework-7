/*
  8. Баги: знайдіть помилку у наведеному фрагменті програми.
*/
// Відповідь:
//           1) неправильна умова в while вона сразу false а повинна бути true.


#include <iostream>
using namespace std;

int main()
{
	int counters = 100;
	while (counters >= 10)
	{
		cout << "counter now: " << counters;
		counters--;
	}
	return 0;
}
