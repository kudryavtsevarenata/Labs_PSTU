/*
#include <iostream>
using namespace std;
int n;

int main()
{
    setlocale(0, "");
    do
    {
        cout << "Введите число, большее 2" << endl;
        cin >> n;
    } while (n <= 2);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << " *";
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << " *";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
*/
#include <iostream>
using namespace std;
int n;

void out(string c, int count)
{
    for (int i = 1; i <= count; i++)
    {
        cout << c;
    }
}

int main()
{
    setlocale(0, "");
    do
    {
        cout << "enter a number greater than 2" << endl;
        cin >> n;
    } while (n <= 2);
    for (int i = 1; i <= n; i++)
    {
        out("  ", n - i);
        out("* ", i);
        cout << "\n";
    }
    return 0;
}