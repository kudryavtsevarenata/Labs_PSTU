#include <iostream>
using namespace std;
int mx, s, i, n, j, a, jk;

int main()
{
	setlocale(0, "");
	do
	{
		cout << "Input the number of sequence elements: ";
		cin >> n;
	} while (n < 1);
	cout << "Input the sequence unit in order: " << endl;
	cin >> a;
	i = 1; // номер текущего элемента
	j = i; // номер максимального элемента
	s = 1; // количество максимальных элементов
	mx = a;
	while (i < n)
	{
		cin >> a;
		i += 1;
		if (mx < a)
		{
			j = i;
			s = 1;
			mx = a;
		}
		else
			if (mx == a)
			{
				++s;
				jk = i;
			}
	}
	cout << "max elem = " << mx << endl;
	cout << "count = " << s << endl;
	if (s == 1)
		cout << "index = "<< j << endl;
	else
	{
		cout << "first index = " << j << endl;
		cout << "last index = " << jk << endl;
	}
	return 0;
}