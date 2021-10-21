//Дано значение угла α в градусах (0 < α < 360). Определить значение этого же угла в радианах, учитывая, что 180◦ = π радианов.
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
        A = A / 180; //считаем радианы
        cout << A << endl;
    }
}
