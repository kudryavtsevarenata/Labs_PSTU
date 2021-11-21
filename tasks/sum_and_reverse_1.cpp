#include <iostream>
#include <string>
using namespace std;
string s;
int a, sum;
bool f;

bool prov(string a)
{
	bool f = false;
	for (int i = 0; i < size(a); i++)
	{
		if (!(isdigit(a[i])))
			f = true;
	}
	return f;
}

int main()
{
	setlocale(0, "");
	sum = 0;
	cout << "Enter a number: ";
	cin >> s;
	if (prov(s) == 0)
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
		cout << "Маша дура!" << endl;
	return 0;
}
