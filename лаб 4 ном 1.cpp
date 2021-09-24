#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, d, r; //вводим вещ. переменные 
    cout << "vvedite 1 paru koordinat" << endl; //сообщение 
    cin >> a >> b; //ввод первой пары коорд
    cout << "vvedite 2 paru koordinat" << endl; //сообщение
    cin >> c >> d; //ввод второй пары
    r = sqrt((pow((a - c), 2)) + (pow((b - d), 2))); //вычисления расстояния по формуле
    cout << r << endl; //вывод результата

}