#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    float a, b, c, d, f;
    cout << "vvedite a, b i c" << endl;
    cin >> a >> b >> c;
    d = c;
    f = b;
    c = a;
    b = d;
    a = f;
    cout << a << b << c << endl;
 
}