#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, d, e, f; //вводим вещ переменные
    cin >> a >> b >> c; //ввод с консоли
    d = c - a; //расст. между а и с
    e = c - b; //расст. между b и с
    f = d + e; // сумма расстояний
    cout << f << endl; //вывод результата
}