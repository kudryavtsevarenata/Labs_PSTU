#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	string s, st;
	int max, num, i;
	int n;
	max = 0;
	cin >> s;
	int c[10] = { 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0 };
	for (i = 0; i < s.length(); i++)
	{
		if ((s[i] == '0') or (s[i] == '1') or (s[i] == '2') or (s[i] == '3') or (s[i] == '4') or (s[i] == '5') or (s[i] == '6') or (s[i] == '7') or (s[i] == '8') or (s[i] == '9'))
		{
			n = int(s[i]);
			c[n - 48]++;
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (c[i] > max)
			max = c[i];
	}
	if (max != 0)
	{
		for (i = 0; i < 10; i++)
		{
			if (c[i] == max)
				cout << "Цифра " << i << " встречается " << max << " р.\n";
		}

	}
	else
	{
		cout << "В строке нет цифр";
	}
	return 0;
}