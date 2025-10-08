#include <iostream>
#include <string>
using namespace std;
double ch = 0;
int main()
{
    cout << "Введите число с плавающей точкой -> ";
    cin >> ch;
    cout << "Как double -> " << ch << endl;
    int ich = (int)ch;
    bool bch = (bool)ch;
    cout << "Как int -> " << ich << endl;
    cout <<  "Число не равно 0? ->" << bch << endl;
    return 0;
}
