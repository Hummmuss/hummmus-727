//Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    double x, y, z;
    cout << "vvedite x" << endl;
    cin >> x;
    z = pow((x - 3), 3); //вспомогательная переменная (x−3)3
    y = 4 * (pow(z,2)) - 7 * z + 2;
    cout << y << endl;
}
