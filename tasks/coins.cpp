#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int n, k; // n - сумма, k - количество купюр
    k = 0;
    int t = 64; // номинал
    cout << "Введите n = ";
    cin >> n;
    while (n > 0)
    {
        if (n >= 1)
        {
            k += n / t;
            n = n % t;
        }
        t = t / 2;
    }
    cout << "k = " << k << endl;
    return 0;
}
