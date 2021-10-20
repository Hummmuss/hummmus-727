#include <iostream> //чтобы работал ввод/вывод
#include <cmath> //чтобы работала функция fabs
using namespace std; //чтобы не писать везде std
int main()
{
    double a, b, c, d, e, f; //ввод вещественных переменных
    cout << "vvedite a i b" << endl;
    cin >> a >> b; //ввод с консоли
    if (a == 0) //условия, что введенные числа не должны равняться нулю
    {
        cout << "chisla ne doljny ravnatsya 0" << endl;
    }
    else if (b == 0) 
    {
        cout << "chisla ne doljny ravnatsya 0" << endl;
    }
    else //если они не равняются нулю, то вычисляем
    {
        c = fabs(a) + fabs(b); 
        d = fabs(a) - fabs(b);
        e = fabs(a) * fabs(b);
        f = fabs(a) / fabs(b);
        cout << c << endl; //вывод результата вычислений
        cout << d << endl;
        cout << e << endl;
        cout << f << endl;
    };
}