#include <iostream> // библиотека ввода и вывода
using namespace std; // вводим пространство имен std
int main()
{
	double a, b, c, r1, r2, p; //ввод вещ переменных
	cout << "vvedite znacheniya peremennyh a, b i c" << endl;
	cin >> a >> c >> b; //ввод переменных a, b, c с консоли
	if ((a > c) or (c > b)) //условие, при котором если a < c < b, то выводит ошибку
	{
		cout << "error" << endl; 
	}
	else  
	{
		r1 = b - c; //вычисления
		r2 = c - a; 
		p = r1 * r2;
		cout << p << endl; //вывод результата
	}
}