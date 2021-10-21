//Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    float x, y;
    cout << "vvedite x" << endl;
    cin >> x;
    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    cout << y << endl;
}
