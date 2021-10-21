//Найти решение системы линейных уравнений вида 
//A1·x + B1·y = C1, 
//A2·x + B2·y = C2,

#include <iostream>
using namespace std;
int main()
{
    float A1, B1, A2, B2, C1, C2, o, o1, o2, x, y;
    cout << "vvedite A1, B1, A2, B2, C1, C2" << endl;
    cin >> A1 >> B1 >> A2 >> B2 >> C1 >> C2;
    o = A1 * B2 - A2 * B1; //определитель
    o1 = C1 * B2 - B1 * C2; //опр 1 пор
    o2 = A1 * C2 - C1 * A2; //опр 2 пор
    x = o1 / o;
    y = o2 / o;
    cout << x << endl;
    cout << y << endl;
}
