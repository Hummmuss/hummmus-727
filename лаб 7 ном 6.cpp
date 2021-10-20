#include <iostream>
using namespace std;
int main()
{
    float A1, B1, A2, B2, C1, C2, o, o1, o2, x, y;
    cout << "vvedite A1, B1, A2, B2, C1, C2" << endl;
    cin >> A1 >> B1 >> A2 >> B2 >> C1 >> C2;
    o = A1 * B2 - A2 * B1;
    o1 = C1 * B2 - B1 * C2;
    o2 = A1 * C2 - C1 * A2;
    x = o1 / o;
    y = o2 / o;
    cout << x << endl;
    cout << y << endl;
}