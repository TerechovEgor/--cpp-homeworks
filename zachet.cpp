#include <iostream>

#include <string>
#include <cstdlib>
using namespace std;

int opredelitel = 0;
string povtor;
int main() 
{
    do {
        int size = 0;
        do {
            cout << "Введите размер строки -> ";
            cin >> size;
        } while ((size < 1)||(size>100));
        int stroka [size];
        int pov [size];
        for (int i = 0; i < size; i++) {pov [i] = 0;} // 0 обозначает, что введенное нами число не соответствует значению искомого 
        
    
        cout << "Заполните строку " << endl;
    
        for (int i = 0; i < size; i++) {        
            int chi = 0;
            cout << "Введите число -> ";
            cin >> chi;
            stroka [i] = chi;      
        }
      
        cout << "| ";
        for (int i = 0; i < size; i++) {
           
           cout << stroka [i];        
           if (i != size - 1) {cout << ", ";}
           
        } 
            
        cout << " |" << endl;
        
        int searchChi = 0;
        int countSearchChi = 0;
        cout << "Какое число хотите найти? -> ";
        cin >> searchChi;
        for (int i = 0; i < size; i++) {      
           if (stroka [i] == searchChi) {
               pov [i] = i +1;
               countSearchChi ++;
           } 
        } 
        cout << "В данной строке было найдено -> " << countSearchChi << " повторений" << endl;
        cout << "Их индексы таковы (с 1) -> [";
        for (int i = 0; i < size; i++) {         
           if (pov [i] != 0 ) {
               cout << pov [i] << " ";
           }
        } 
            
        cout << "]" << endl;    
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
    } while (povtor == "Y");

    if (povtor== "N") {
        cout << "Жалко...";    
    }    
    return 0;
}
