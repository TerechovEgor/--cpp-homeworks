#include <iostream>
#include <string>

using namespace std;
int ch;
string povtor;
int square(int x)
{
    
    int kv;
    kv = x * x;
    cout << "Квадрат, введенного Вами числа равен -> " << kv << endl;    
}

int main() 
{
    do {
        cout << "Введите число, квадрат которого хотите найти -> ";
        cin >> ch;
        square (ch);
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
        
    } while (povtor == "Y");
    if (povtor== "N") {
        cout << "Жалко...";    
    }    
    return 0;
}
