#include <iostream>
using namespace std;
double e, sum, n, a;
int i;

double factor(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
    setlocale(0, "");
    e = 1E-4;
    cout << "The sum of the series \nan = n!/(2*n)!\nwith accuracy e = " << e << endl;
    sum = 0;
    n = 0;
    i = 0;
    do
    {
        ++n; ++i;
        a = factor(n) / factor(2 * n);
        sum += a;
        cout << i << " elem: " << a << endl;
    } while (a >= e);
    cout << "Result: " << sum << endl;
    return 0;
}
