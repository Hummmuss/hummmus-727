//Дано число A. Вычислить A15, используя две вспомогательные переменные и пять операций умножения.

#include <iostream>
using namespace std;
int main()
{
    float A, b;
    cout << "vvedite A" << endl;
    cin >> A;
    b = pow(A, 2) * A * A * A; //вспомогательная переменная
    A = b * b * b;
    cout << A << endl;
}
