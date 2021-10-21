//Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    float a, b, c, d, f;
    cout << "vvedite a, b i c" << endl;
    cin >> a >> b >> c;
    d = c; //меняем местами числа с помощью вспомогательных переменных
    f = b;
    c = a;
    b = d;
    a = f;
    cout << a << b << c << endl;
 
}
