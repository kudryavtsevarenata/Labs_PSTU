#include <iostream>
using namespace std;
int n, s, p;

int main()
{
	setlocale(0, "");
	cout << "s = 1 * 2 + 2 * 3 * 4 + 3 * 4 * 5 * 6 ..." << endl;
	do
	{
		cout << "Input digit greater than 0" << endl;
		cin >> n;
	} while (n <= 0);
	s = 0;
	for (int i = 1; i <= n; i++)
	{
		p = 1;
		for (int j = i; j <= (2*i); j++)
			p *= j;
		s += p;
	}
	cout << "The sum of the " << n << " elements is " << s;
	return 0;
}