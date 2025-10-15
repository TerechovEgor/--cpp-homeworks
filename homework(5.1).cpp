#include <iostream>
#include <string>
using namespace std;
int a, b;
int main()
{
    cout << "Введите первое число -> ";
    cin >> a;
    cout << "Введите второе число -> ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "После обмена" << endl;
    cout << "Первое число -> " << a << endl;
    cout << "Второе число -> " << b << endl;    
    return 0;
}
