//Дано значение угла α в радианах (0 < α < 2·π). Определить значение этого же угла в градусах, учитывая, что 180◦ = π радианов
#include <iostream>
using namespace std;
int main()
{
    float A;
    cout << "vvedite A" << endl;
    cin >> A;
    if ((A < 0) or (A > 2)) {
        cout << "error" << endl;
 
    }
    else {
        A = A * 180;
        cout << A << endl;
    }
}
