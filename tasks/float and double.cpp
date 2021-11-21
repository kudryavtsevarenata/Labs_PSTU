/*
#include <iostream>
#include <cmath>
using namespace std;
float af, bf, cf, df, ef, gf, hf;
double ad, bd, cd, dd, ed, gd, hd;

int main()
{
    setlocale(0, "");
    af = 100; ad = 100;
    bf = 0.001; bd = 0.001;
    cout << "a = 100   b = 0.001\n\n                           float          double" << endl;
    cout << "______________________________________________" << endl;
    cf = pow(af - bf, 4);
    cd = pow(af - bf, 4);
    cout << "(a - b)^4             (1)   "<< cf<< "    " << cd << endl;
    df = pow(af, 4) - 4 * pow(af, 3) * bf + 6 * pow(af, 2) * pow(bf, 2);
    dd = pow(ad, 4) - 4 * pow(ad, 3) * bd + 6 * pow(ad, 2) * pow(bd, 2);
    cout << "a^4-4*a^3*b+6*a^2*b^2 (2)   " << df << "    " << dd << endl;
    ef = cf - df;
    ed = cd - dd;
    cout << "(1) - (2)                   " << ef << "             " << ed << endl;
    gf = pow(bf, 4) - 4 * af * pow(bf, 3);
    gd = pow(bd, 4) - 4 * ad * pow(bd, 3);
    cout << "b^4-4*a*b^3                 " << gf << "  " << gd << endl;
    hf = ef / gf;
    hd = ed / gd;
    cout << "Result:                     " << hf << "            " << hd << endl;
    return 0;
}
*/
#include <iostream>
using namespace std;
int n, m;

int main()
{
    setlocale(0, "");
    cout << "Введите значения m и n через пробел:" << endl;
    cin >> m >> n;
    cout << "\nm = " << m << " n = " << n << endl;
    cout << "1) n---m = " << n-- - m << endl;
    cout << "m = " << m << " n = " << n << endl;
    cout << "2) m-- < n = " << (m-- < n) << endl;
    cout << "m = " << m << " n = " << n << endl;
    cout << "3) n++ > m = " << (n++ > m) << endl;
    cout << "m = " << m << " n = " << n << endl;
    return 0;
}