#include <iostream>
using namespace std;
int main()
{
    float A, b;
    cout << "vvedite A" << endl;
    cin >> A;
    b = pow(A, 2) * A * A * A;
    A = b * b * b;
    cout << A << endl;
}