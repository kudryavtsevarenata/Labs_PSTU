#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int x, y;
    cout << "Введите координаты точки (x, y):"<< endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if (x != 0 && y != 0)
    {
        if (x < 0 && y > 0)
        {
            cout << "2 четверть" << endl;
        }
        else if (x > 0 && y > 0)
        {
            cout << "1 четверть" << endl;
        }
        else if (x < 0 && y < 0)
        {
            cout << "3 четверть" << endl;
        }
        else 
            cout << "4 четверть" << endl;
    }
    else
        cout << "х и у не должны быть равны 0!" << endl;
    return 0;
}