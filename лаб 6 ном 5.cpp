#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    double x, y, z;
    cout << "vvedite x" << endl;
    cin >> x;
    z = pow((x - 3), 3);
    y = 4 * (pow(z,2)) - 7 * z + 2;
    cout << y << endl;
}