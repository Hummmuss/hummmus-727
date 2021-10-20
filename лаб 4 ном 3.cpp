#include <iostream>  // ввод вывод
using namespace std; // чтобы не писать везде std::

int main() {
	setlocale(LC_ALL, "Russian"); //библиотека, чтобы русский язык работал
	double a, b, C; //вводим вещественные переменные
	cout << "vvedite a" << endl;
	cin >> a; //ввод чисел с консоли
	cout << "vvedite b" << endl;
	cin >> b;
	C = (a + b) / 2; //считаем ср.ар.
	cout << "среднее арифметическое - " << C; //вывод
}