#include <iostream>   // ввод вывод
using namespace std; // чтобы не писать везде std::

int main() {
	double p, d, L; // ввожу вещественные переменные (число пи, диаметр и длину окружности)
	p = 3.14;
	cin >> d; //ввод диаметра с консоли
	L = d * p; // считаем длину окружности
	cout << "L = " << L << endl; // вывод ответа
}