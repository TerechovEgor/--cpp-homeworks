#include <iostream>
#include <string>

using namespace std;

string povtor;
int k = 0;
int chisl;
int ostatok;
double opredDlin;
int main() 
{
    do {
        cout << "Введите число " << endl;
        cin >> chisl;
    
        opredDlin = chisl;
        do {
            opredDlin = opredDlin / 10;
            k++;
        } while (opredDlin >=1 );
        
       ostatok = chisl;
       int sprava = 0;
       for (int i = 0; i < k/2; i++) {        
            int udal = ostatok % 10;
            ostatok /= 10;
            sprava = sprava*10 + udal;
        }
        if (k % 2 != 0) {
            ostatok /= 10; 
        }
        int sleva = ostatok; 
        
        
        if (sleva == sprava) {
             cout << "Число - палиндром! " << endl;
        }
        else {
            cout << "Не является палиндромом ";
        }
        cout <<endl;
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
        k = 0;
    } while (povtor == "Y");

    if (povtor== "N") {
        cout << "Жалко...";    
    }    
        return 0;
}
