#include <iostream>  // ввод вывод
using namespace std; // чтобы не писать везде std::

int main() {
	setlocale(LC_ALL, "Russian"); //библиотека, чтобы русский язык работал
	double a, b, S, P; //ввод вещественных переменных 
	cin >> a >> b; // ввод длины и ширины прямоугольника с консоли
	S = a * b; // считаем площадь
	P = 2 * (a + b); // считаем периметр
	cout << "Площадь прямоугольника - " << S << endl; // вывод площади 
	cout << "Периметр прямоугольника - " << P << endl; //вывод периметра.
}