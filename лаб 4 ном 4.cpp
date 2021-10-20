#include <iostream> //чтобы работал ввод/вывод
using namespace std; //чтобы не писать везде std
int main() 
{
    double a, b, c, d, e, f; //вводим веществ переменные
    cout << "vvedite a i b" << end;
    cin >> a >> b; //ввод с консоли
    if (a == 0) //если введенные числа равны нулю, выдается сообщение, что так быть не должно
    {
        cout << "chisla ne doljny ravnatsya 0" << endl;
    }
    else if (b == 0)
    {
        cout << "chisla ne doljny ravnatsya 0" << endl;
    }    else //если числа не равны нулю, то производим вычисления
        {
        c = a*a + b*b;
        d = a*a - b*b;
        e = a*a*b*b;
        f = a*a / b*b;
        cout << c << endl; //выводим результаты вычислений
        cout << d << endl;
        cout << e << endl;
        cout << f << endl;
        };
}    