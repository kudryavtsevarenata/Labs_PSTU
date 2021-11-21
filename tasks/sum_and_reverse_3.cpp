#include <iostream>
#include <string>
using namespace std;
string s;
int a, sum;
bool f;

int main()
{
	setlocale(0, "");
	sum = 0;
	cout << "Enter a number: ";
	cin >> s;
	for (int i = 0; i < size(s); i++)
	{
		if (!(isdigit(s[i])))
			f = true;
	}
	if (f == false)
	{
		a = stoi(s);
		while (a != 0)
		{
			sum += a % 10;
			a /= 10;
		}
		cout << "Sum: " << sum << endl;
		for (int i = size(s) - 1; i >= 0; i--)
		{
			cout << s[i];
		}
	}
	else
		cout << "REPEAT INPUT" << endl;
	return 0;
}
