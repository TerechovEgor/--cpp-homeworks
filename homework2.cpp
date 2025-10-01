#include <iostream>
#include <string>
using namespace std;

int number1 = 0;
int number2 = 0;
int summ = 0;
int diff = 0;
int prois = 0;
int main()
{
    cout << "Введите первое число -> ";
    cin >> number1;
    cout << "Введите второе число -> ";
    cin >> number2;
    summ = number1 + number2;
    diff = number1 - number2;
    prois = number1 * number2;
    cout << "Сумма -> " << summ << endl;
    cout << "Разность -> " << diff << endl;
    cout << "Произведение -> " << prois << endl;
    return 0;
}
