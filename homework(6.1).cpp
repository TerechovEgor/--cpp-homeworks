#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int minim;
int maxim;
string povtor;
int massive[5];
int main() 
{
    do {
        cout << "Введите диапазон рандомных чисел " << endl;
        cout << "От -> ";
        cin >> minim;      
        cout << "До -> ";
        cin >> maxim;
    
        for (int i = 0; i <= 5; i++) {        
            massive[i] = minim + rand() % (maxim - minim + 1);    
            cout << massive[i] << " ";       
        } 
        cout <<endl;
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
    } while (povtor == "Y");

    if (povtor== "N") {
        cout << "Жалко...";    
    }    
        return 0;
}
