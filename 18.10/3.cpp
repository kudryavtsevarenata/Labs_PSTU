/*
Напишите программу, генерирующую следующий вывод:
10
20
19
Используйте представление числа 10 в виде целой константы. Для
вывода 20 используйте присваивание, для вывода 19 операцию 
декремента
*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int const a = 10;
    int b = a + 10;
    cout << a << '\n' << b << endl;
    cout << --b;
    return 0;
}