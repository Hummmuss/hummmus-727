//Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. Определить расстояние между ними через T часов, если автомобили удаляются друг от друга. 
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
