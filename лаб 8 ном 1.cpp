//Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл
#include <iostream>
using namespace std;
int main()
{
    float a;
    cout << "vvedite a" << endl;
    cin >> a;
    a = a / 1024;
    cout << a << endl;
}
