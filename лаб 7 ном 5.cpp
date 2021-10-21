//Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0).
#include <iostream>
using namespace std;
int main()
{
    float A, B, x;
    cout << "vvedite A i B" << endl;
    cin >> A >> B;
    x = - B / A; //так выглядит упрощенное уравнение
    cout << x << endl;
}
