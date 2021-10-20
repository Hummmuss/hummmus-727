#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    float a, b, c, d, f;
    cout << "vvedite a, b i c" << endl;
    cin >> a >> b >> c;
    d = a;
    f = b;
    a = c;
    b = d;
    c = f;
    cout << a << b << c << endl;
 
}