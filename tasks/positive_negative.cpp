#include <iostream>
using namespace std;
int N, i, a;
bool f = false; // проверка на нулевой элемент

int main()
{
	setlocale(0, "");
	do
	{
		cout << "Input the number of sequence elements: ";
		cin >> N;
	} while (N < 1);
	i = 1; // инициализируем счётчик цикла while
	while (i <= N && !f)
	{
		cout << "\nInput the sequence unit: ";
		cin >> a;
		if (a == 0)
			++i;
		else
			f = true;
	}
	if (f == true)
		if (a > 0)
			cout << "\nPositive number met before negative";
		else 
			cout << "\nNegative number met before positive";
	else 
		cout << "\nAll elements of the sequence are zeros";
	return 0;
}