//Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.
#include <iostream>
using namespace std;
int main()
{
	int a, des, ed, b;
	cout << "vvedite dvusnachnoye chislo" << endl;
	cin >> a;
	if ((a < 10) or (a>100))
	{
	    cout << "chislo doljno byt dvusnachnym" << endl;
	}
    des = a/10;
    ed = a%10;
    b = des+(ed*10);
    cout << b << endl;
}
