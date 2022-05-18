#include <iostream>
using namespace std;
int n, z, p;
/*

* * * * *
* * * *
* * *
* *
*

*/
int main()
{
	setlocale(0, "");
	do
	{
		cout << "Input digit greater than 3" << endl;
		cin >> n;
	} while (n < 4);
	p = 0;
	z = n;
	for (int i = 1; i <= n; i++)
	{
		cout << "\n";
		for (int j = 1; j <= z; j++)
			cout << "* ";
		for (int k = 1; k <= p; k++)
			cout << "  ";
		p = p + 1;
		z = z - 1;
	}
	return 0;
}