
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    static int i = 1; // инициализация переменой
    cout << "Начальное значение i = " << i << endl; // вывод начального значения
    cout << "Значение выражения ++i * i++ = " << ++i * i++ << endl; // вывод значения выражения
    return 0;
}


/*
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double a; // инициализация переменной
    cout << "1 галлон = 0.1337 кубических фута" << endl;
    cout << "Введите число галлонов:  ";
    cin >> a; // ввод a
    if (a >= 0) // если a не отрицательное
        cout << a << " галлонов составляет " << a * 0.1337 << " кубических фута" << endl; // при выводе а переводится в кубические футы по формуле
    else // если a отрицательное
        cout << "Введите положительное число" << endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int const a = 10; // инициализация константы целого типа
    int b = a + 10; // инициализация переменной и присваивание ей значения
    cout << a << '\n' << b << endl; // вывод значений
    cout << --b; // вывод значения --b
    return 0;
}
*/

/*
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
    cin >> a; // ввод а
    cout << "Введите второе число:" << endl;
    cin >> b; // ввод b
    for (int i = 0; i < size(a); i++) // цикл for для перебора всех символов
    {
        if (!isdigit(a[i])) //если символ не является цифрой
            if (a[i] != '.') //если символ не точка
                f1 = true;
    }
    for (int i = 0; i < size(b); i++)// цикл for для перебора всех символов
    {
        if (!isdigit(b[i])) //если символ не является цифрой
            if (b[i] != '.') //если символ не точка
                f2 = true;
    }
    if (f1 == true)
        if (f2 != true)
            cout << "Первое число введено неверно" << endl;
        else 
            cout << "Оба числа введены неверно" << endl;
    else 
        if (f2 == true)
            cout << "Второе число введено неверно" << endl;
        else
        {
            a1 = stod(a), b1 = stod(b); // преобразование из string в double
            cout << a1 << " * " << b1 << " = " << a1 * b1 << endl; // вывод результата
        }
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    string s;
    cout << "Инвертирование строки\nВведите строку из 5 элементов: ";
    cin >> s; // ввод s
    if (size(s) == 5) // если строка состоит из 5 символов
        for (int i = 4; i >= 0; i--)
            cout << s[i]; // вывод символов в обратном порядке
    else // если строка состоит не из 5 символов
        cout << "Введена строка не из 5 символов" << endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int i = 6;
    int* pi = &i;
    int n = *pi;
    cout << pi << endl;
    return 0;
}
*/