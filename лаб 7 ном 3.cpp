//Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.

#include <iostream>
using namespace std;
int main()
{
    float A, X, Y, C, s;
    cout << "vvedite posledovatelno X, A, Y" << endl;
    cin >> X >> A >> Y;
    C = A / X; //сколько стоит 1 кг конфет
    s = Y * C; //ск стоит У кг конфет
    cout << C << endl;
    cout << s << endl;
 
}
