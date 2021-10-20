#include <iostream>
using namespace std;
int main()
{
    float V1, V2, S, T, S2;
    cout << "vvedite V1, V2, S, T" << endl;
    cin >> V1 >> V2 >> S >> T;
    S2 = T * V1 + T * V2 + S;
    cout << S2 << endl;
}