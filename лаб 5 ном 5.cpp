//Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    float x1, y1, x2, y2, x3, y3, a, b, c, S, P;
    cout << "vvedite posledovatelno x1, y1, x2, y2, x3, y3" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); //длина стороны а по формуле
    b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)); //длина стороны b по формуле
    c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2)); //длина стороны c по формуле
    if ((a < (b + c)) and (b < (a + c)) and (c < (a + b))) //проверка на существование треугольника
    {
        P = (a + b + c) / 2; //полупериметр
        S = sqrt(P*(P - a)*(P - b)*(P - c)); //площадь по формуле герона
        cout << "S = " << S << endl;
        cout << "P = " << P*2 << endl;
    }
    else
    {
        cout << "error the triangle does not exist" << endl;
    }
 
}
