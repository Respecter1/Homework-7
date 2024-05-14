/*
7. Баги: знайдіть помилку у наведеному фрагменті програми.
*/
// Відповідь:
//           1) в умові for  була помилка, після умови стояла дво крапка а треба крапк з комою
//			 2) вкінці for не ставиться крапка з комою



#include <iostream>
using namespace std;

int main()
{
	for (int counter = 0; counter < 10; counter++)
		cout << counter << " ";
	cout << endl;

	return 0;
}