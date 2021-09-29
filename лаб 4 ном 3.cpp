#include <iostream>
using namespace std;
int main()
{
	double a, b, c, r1, r2, p;
	cin >> a >> c >> b;
	if ((a > c) or (c > b))
	{
		cout << "error" << endl;
	}
	else 
	{
		r1 = b - c;
		r2 = c - a;
		p = r1 * r2;
		cout << p << endl;
	}
	return 0;
}