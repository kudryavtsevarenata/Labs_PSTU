#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int x; // исследуемое число
    int a, b, c; // цифры числа x
    bool f;
    f = false;
    cout << "Введите трёхзначное число (цифры в числе должны различаться)\n";
    cin >> x;
    while ((x < 100) || (x > 999))
    {
        cout << "Повторите ввод\n";
        cin >> x;
    }
    a = x % 10; //последняя цифра
    x = x / 10;
    b = x % 10; //вторая цифра
    c = x / 10; //первая цифра
    while (f == false)
    {
        if ((a == b) || (b == c) || (a == c))
        {
            cout << "Повторите ввод (цифры не должны повторяться)\n";
            cin >> x;
            a = x % 10; //последняя цифра
            x = x / 10;
            b = x % 10; //вторая цифра
            c = x / 10;
        }
        else
            f = true;
    }
    cout << "Все возможные последовательности чисел:\n" << endl;
    cout << a << b << c << endl;
    cout << a << c << b << endl;
    cout << b << a << c << endl;
    cout << b << c << a << endl;
    cout << c << b << a << endl;
    cout << c << a << b << endl;
    // далее реализован алгоритм нахождения наибольшего числа
    if ((a > b) && (a > c))
    {
        cout << "Наибольшее из этих чисел: " << a;
        if (b > c)
            cout << b << c;
        else
            cout << c << b;
    }
    else
    {
        if ((b > a) && (b > c))
        {
            cout << "Наибольшее из этих чисел: " << b;
            if (a > c)
                cout << a << c;
            else
                cout << c << a;
        }
        else if ((c > a) && (c > b))
        {
            cout << "Наибольшее из этих чисел: " << c;
            if (b > a)
                cout << b << a;
            else
                cout << a << b;
        }
    }
    return 0;
}