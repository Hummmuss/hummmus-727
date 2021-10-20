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