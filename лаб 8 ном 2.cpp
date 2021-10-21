//Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное 
//количество отрезков длины B (без наложений). Найти количество отрезков B, размещенных на отрезке A.
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    int s;
    cout << "vvedite a i b" << endl;
    cin >> a >> b;
    if (b >= a) 
    {
        cout << "error" << endl;
    }
    s = a / b;
    cout << s << endl;
}
