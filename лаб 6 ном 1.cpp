#include <iostream> //библиотека ввода и вывода
using namespace std; //пространство имен std
#include <cmath> //библиотека для осуществления алгебраических вычислений
int main()
{
    float a, b, c; //ввод переменных с плавающей точкой
    cout << "vvedite znacheniya peremehhyh a i b" << endl;
    cin >> a >> b; //ввод переменных а и b  с консоли
    c = a; //осуществляем замены используя переменную с
    a = b;
    b = c;
    cout << a << endl; //вывод результата
    cout << b << endl;

}