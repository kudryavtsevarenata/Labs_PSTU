/*
Напишите фрагмент программы для умножения двух чисел и вывода на экран результата.
Числа задаёт пользователь
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(0, "");
    string a, b;
    bool f1 = false, f2 = false;
    double a1, b1;
    cout << "Умножение двух чисел\nВведите первое число:" << endl;
    cin >> a;
    cout << "Введите второе число:" << endl;
    cin >> b;
    for (int i = 0; i < size(a); i++)
    {
        if (!isdigit(a[i]) && a[i] != '.')
            f1 = true;
    }
    for (int i = 0; i < size(b); i++)
    {
        if (!isdigit(b[i]) && b[i] != '.')
            f2 = true;
    }
    if (f1 == true || f2 == true)
    {
        if (f1 == true && f2 != true)
            cout << "Первое число введено неверно" << endl;
        if (f1 != true && f2 == true)
            cout << "Второе число введено неверно" << endl;
        if (f1 == true && f2 == true)
            cout << "Оба числа введены неверно неверно" << endl;
    }
    if (f1 == false && f2 == false)
    {
        a1 = stod(a), b1 = stod(b);
        cout << a1 << " * " << b1 << " = " << a1 * b1 << endl;
    }
    return 0;
}