#include <iostream>
using namespace std;

int main()
{
	string str;
	char current;
	long count, i, mx = 0;
	cin >> str;
	current = str[0];
	count = 1; i = 0;
	if (str.size() != 1 )
		{
		while (i < str.size())
		{
			if (str[i] == str[i+1])
				count++;
			else
			{
				if (count > mx)
					mx = count;
				current = str[i];
				count = 1;
			}
			i++;
		}
	}
	else mx = 1;
	cout << mx << endl;
	return 0;
}