#include <iostream>
#include <string>
using namespace std;
string a;
bool f = false;
int a1;

int main()
{
    setlocale(0, "");
    cout << "Введите цифру:" << endl;
    cin >> a;
    cout << "" << endl;
    for (int i = 0; i < size(a); i++)
        if (!isdigit(a[i]) || size(a) != 1)
            f = true;
    if (f == 0)
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
        cout << "Цифра введена неверно" << endl;
    return 0;
}