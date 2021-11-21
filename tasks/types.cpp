﻿/*
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    string s;
    bool flag = 0;
    double a;
    cout << "Введите значение температуры в градусах по Фаренгейту" << endl;
    cin >> s; // ввод s
    for (int i = 0; i < size(s); i++) // цикл for перебирает все символы введённого значения
    {
        if (!isdigit(s[i]))
            if (s[i] != '.')// если символ не является цифрой и символ не точка, выполняется условие
                flag = 1;
    }
    if (flag == 0) // если в s все символы - цифры
    {
        a = atof(s.c_str()); // s преобразуется в число
        a = 0.56 * (a - 32); // расчёт температуры (в градусах Цельсия) по формуле
        cout << s << " градусов по Фаренгейту будет составлять " << a << " градусов Цельсия";
    }
    else // если в s не все символы являются символами
        cout << "Введено не числовое значение";
    return 0;
}
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    int h, m, s, hk, mk, sk, total, totalk, result; // инициализация переменных
    cout << "Ввод значения начала временного промежутка: ";
    cout << "\nВведите количество часов: ";
    cin >> h;
    cout << "Введите количество минут: ";
    cin >> m;
    cout << "Введите количество секунд: ";
    cin >> s;
    cout << "\nВвод значения конца временного промежутка: ";
    cout << "\nВведите количество часов: ";
    cin >> hk;
    cout << "Введите количество минут: ";
    cin >> mk;
    cout << "Введите количество секунд: ";
    cin >> sk;
    if (h >= 0)
        if (m >= 0)
        {
            if (s >= 0)
            {
                if (hk >= 0)
                {
                    if (mk >= 0)
                    {
                        if (sk >= 0)// если все введнные значения не отрицательны
                        {
                            total = h * 60 * 60 + m * 60 + s; // вычисление начального времени в секундах
                            totalk = hk * 60 * 60 + mk * 60 + sk; // вычисление конечного времени в секундах
                            result = abs(total - totalk); // нахождение разницы между начальным и конечным временем в секундах
                            cout << "Продолжительность временного промежутка составляет " << result / 3600 % 60 << " ч. " << result / 60 % 60 << " мин. " << result % 60 << " сек.";
                            // при выводе происходит перевод времени из секунд, в часы, минуты и секунды
                        }
                    }
                }
            }
        }
    else // если какая-либо переменная отрицательна выводится сообщение
        cout << "Данные введены неверно";
    return 0;
}
