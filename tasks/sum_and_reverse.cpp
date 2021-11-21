#include <iostream>
using namespace std;
int a, sum, x, a1;

int main()
{
    setlocale(0, "");
    x = 0;
    do
    {
        cout << "Введите число: ";
        cin >> a;
    } while (a <= 0);
    a1 = a;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    cout << "Сумма цифр: " << sum << endl;
    while (a1 > 0)
    {
        x = x * 10 + a1 % 10;
        a1 /= 10;
    }
    cout << x;
    return 0;
}

