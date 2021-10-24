/* Определить, чему будет равно выражение ++i*i++ при начальном
i = 1. Проверить результат программой
*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int i = 1;
    cout << "Начальное значение i = " << i << endl;
    cout << "Значение выражения ++i * i++ = " << ++i * i++ << endl;
    return 0;
}