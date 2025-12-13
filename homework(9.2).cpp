#include <iostream>
#include <string>

using namespace std;
int x;
string povtor;
void increase(int &x)
{
    x += 10;
}

int main() 
{
    do {
        cout << "Введите число -> ";
        cin >> x;
        increase (x);
        cout << "Сумма, введенного Вами числа и 10 равна -> " << x << endl;   
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
        
    } while (povtor == "Y");
    if (povtor== "N") {
        cout << "Жалко...";    
    }    
    return 0;
}
