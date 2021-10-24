/*
Напишите фрагмент программы, в которой вводятся пять символов
и выводятся на экран в обратной последовательности
*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    string s;
    cout << "Инвертирование строки\nВведите строку из 5 элементов: ";
    cin >> s;
    if (size(s) == 5)
    {
        for (int i = 4; i >= 0; i--)
        {
            cout << s[i];
        }
    }
    else
    {
        cout << "Введена строка не из 5 элементов" << endl;
    }
    return 0;
}