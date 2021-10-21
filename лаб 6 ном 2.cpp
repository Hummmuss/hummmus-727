// Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    float a, b, c, d, f;
    cout << "vvedite a, b i c" << endl;
    cin >> a >> b >> c;
    d = a; //меняем местами числа с помощью вспомогательных переменных
    f = b;
    a = c;
    b = d;
    c = f;
    cout << a << b << c << endl;
 
}
