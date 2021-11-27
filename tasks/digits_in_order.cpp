#include <iostream>
#include <string>
using namespace std;
string a;
bool f = false;
int a1;

bool digit(char a)
{
    bool flag = false;
    if (a <= 47)
        flag = true;
    if (a >= 58)
        flag = true;
    return flag;
}

int main()
{
    setlocale(0, "");
    cout << "Input digit:" << endl;
    cin >> a;
    cout << endl;
    if (size(a) == 1)
    {
        for (int i = 1; i <= size(a); i++)
        if (digit(a[i - 1]) == true)
            f = true;
    }
    else f = true;
    if (f == false)
    {
        a1 = stoi(a);
        switch (a1)
        {
        case 0: cout << 0 << endl;
        case 1: cout << 1 << endl;
        case 2: cout << 2 << endl;
        case 3: cout << 3 << endl;
        case 4: cout << 4 << endl;
        case 5: cout << 5 << endl; 
        case 6: cout << 6 << endl;
        case 7: cout << 7 << endl;
        case 8: cout << 8 << endl;
        case 9: cout << 9 << endl; break;
        }
    }
    else
        cout << "Digit is input incorrectly" << endl;
    return 0;
}