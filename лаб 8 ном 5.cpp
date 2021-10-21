#include <iostream>
using namespace std;
int main()
{
    int a, sot, des, ed, r;
    cout << "vvedite trehznachnoye chislo" << endl;
    cin >> a;
    if ((a<100) or (a>999))
    {
        cout << "chislo doljno byt trehznachnym" << endl;
    }
    ed = a%10;
    r = a/10;
    des = r%10;
    sot = a/100;
    cout << des << ed << sot << endl;
}
