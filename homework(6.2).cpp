#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int minim;
int maxim;
string povtor;
int massive2D [1][1];
int main() {
do {
    cout << "Введите диапазон рандомных чисел " << endl;
    cout << "От -> ";
    cin >> minim;      
    cout << "До -> ";
    cin >> maxim;
    
    for (int i = 0; i <= 1; i++) {        
        for (int j =0; j <= 1; j++) {
            massive2D [i][j] = minim + rand() % (maxim - minim + 1);    
            cout << massive2D [i][j] << " ";
            if (j==1) {
                cout << endl;    
            }        
         }
               
    } 
    cout << "Главная диагональ -> " << massive2D [0][0] << " " << massive2D [0+1][0+1];
    cout << endl;
    cout << "Хотите повторить? (Y or N)" << endl;
    cin >> povtor;
} while (povtor == "Y");

if (povtor== "N") {
    cout << "Жалко...";    
}    
    return 0;
}
