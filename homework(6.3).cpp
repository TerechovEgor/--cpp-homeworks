#include <iostream>
#include <string>
using namespace std;
string stroka;
string povtor;
int podsch;
int main() 
{
    do {
        cout << "Введите строку для определения ее длины " << endl;
        cin >> stroka;     
        podsch = stroka.length();
        cout << "Длина введенной Вами строки такова -> " << podsch <<endl;
        cout <<endl;
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
    } while (povtor == "Y");

    if (povtor== "N") {
        cout << "Жалко...";    
    }    
        return 0;
}
