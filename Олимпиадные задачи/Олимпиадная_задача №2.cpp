#include <iostream>
#include <ctime> // содержит time()
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int n = rand() % 100 + 1; // n в интервале [1, 100]
    int x, count; // count - счётчик попыток
    count = 1;
    cout << "Задача: за 7 попыток отгадать число в интервале [1, 100]\n";
    cout << "Введите число: ";
    cin >> x;
    if (x == n)
        cout << "Вы угадали число с первой попытки!";
    else
    {
        count++;
        if (x < n)
            cout << "Загаданное число больше чем " << x << endl;
        else
            cout << "Загаданное число меньше чем " << x << endl;
    }
    while ((x != n) && (count <= 7))
    {
        cout << "\nВведите число ещё раз: ";
        cin >> x;
        if (x == n)
            cout << "Вы угадали число с " << count << "-ой попытки!";
        else
        {
            count++;
            if (x < n)
                cout << "Загаданное число больше чем " << x << endl;
            else
                cout << "Загаданное число меньше чем " << x << endl;
        }
    }
    if (count > 7)
        cout << "GAME OVER";
    return 0;
}
