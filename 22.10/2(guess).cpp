#include <iostream>
#include <cstdlib>
#include <ctime> // содержит time()
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int n = rand() % 100 + 1; // n в интервале [1, 100]
    int x, count; // count - счётчик попыток
    cout << "Задача: за 7 попыток отгадать число в интервале [1, 100]\n";
    cout << "Введите число: ";
    cin >> x;
    if (x == n) 
        cout << "Вы угадали число с первой попытки!";
    count = 1;
    count++;
    while ((x != n) && (count <= 7))
    {
        cout << "\nВведите число ещё раз: ";
        cin >> x;
        if (x == n)
            cout << "Вы угадали число с " << count << "-ой попытки!";
        count++;
    }
    if (count > 7)
        cout << "GAME OVER";
    return 0;
}