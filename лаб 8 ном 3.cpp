//Даны целые положительные числа A и B (A > B). 
//На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A.

#include <iostream>
using namespace std;
int main()
{
	float A, B, d;
	cout << "vvedite A i B" << endl;
	cin >> A >> B;
	if (B > A)
	{
		cout << "B ne mojet byt bolshe A" << endl;
	}
	int c = A / B;
	d = A - (c*B);
	cout << d << endl;

}
