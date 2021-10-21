//Дано число A. Вычислить A8 , используя вспомогательную переменную и три операции умножения.
#include <iostream>
using namespace std;
int main()
{
    float A, b;
    cout << "vvedite A" << endl;
    cin >> A;
    b = A*A; //вспомогательная переменная 
    A = b * b * b;
    cout << A << endl;
 
