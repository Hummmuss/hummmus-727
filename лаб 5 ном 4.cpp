#include <iostream>  // ввод вывод
using namespace std; // чтобы не писать везде std::
//Даны координаты двух противоположных вершин прямоугольника:
//(x1, y1), (x2, y2).Стороны прямоугольника параллельны осям координат.

int main() {
	cout << "vvedite posledovatelno x1, y1, x2, y2" << endl;
	int x1, x2, y1, y2, a, b, S, P;
	cin >> x1 >> y1 >> x2 >> y2;
	a = abs(y2 - y1);
	b = abs(x2 - x1);
	S = a * b;
	P = 2 * (a + b);
	cout << "S = " << S << endl;
	cout << "P = " << P << endl;
}