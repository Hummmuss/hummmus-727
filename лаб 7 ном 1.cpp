
#include <iostream>
using namespace std;
int main()
{
    float A;
    cout << "vvedite A" << endl;
    cin >> A;
    if ((A < 0) or (A > 360)) {
        cout << "error" << endl;
 
    }
    else {
        A = A / 180;
        cout << A << endl;
    }
}