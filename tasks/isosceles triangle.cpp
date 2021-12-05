#include <iostream>
using namespace std;
int n, z, p;

int main()
{
	setlocale(0, "");
	do
	{
		cout << "Input digit greater than 3 and odd digit" << endl;
		cin >> n;
	} while (n < 4 || n % 2 == 0);
	p = (n + 1) / 2;
	z = 1;
	for (int i = 1; i <= (n + 1)/2; i++)
	{
		cout << "\n";
		for (int j = 1; j <= p; j++)
			cout << " ";
		for (int k = 1; k <= z; k++)
			cout << "*";
		for (int j = 1; j <= p; j++)
			cout << " ";
		p = p - 1;
		z = z + 2;
	}
	return 0;
}