#include <iostream>
#include <string>

using namespace std;
int ch;
string povtor;
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    do
    {
        cout << "Введите число, факториал которого хотите найти -> ";
        cin >> ch;
        cout << "Факториал, введенного Вами числа равен -> "<< factorial(ch) << endl;
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;

    } while (povtor == "Y");
    if (povtor == "N")
    {
        cout << "Жалко...";
    }
    return 0;
}
