//Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, r, rr, p;
	cout << "vvedite znacheniya tochek a, b i c" << endl;
	cin >> a >> b >> c;
	if ((a > b) or (b > c))
	{
		cout << "error" << endl;
	}
	else
	{
		r = c - b; //расстояние между с и б
		rr = c - a; //расстояние между с и а
		p = r + rr; //сумма расстояний
		cout << p << endl;
	}
}
