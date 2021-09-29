#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, r, rr, p;
	cin >> a >> b >> c;
	if ((a > b) or (b > c))
	{
		cout << "error" << endl;
	}
	else
	{
		r = c - b;
		rr = c - a;
		p = r + rr;
		cout << p << endl;
	}
}