#include <iostream>
#include <string>

using namespace std;
bool flick = true;
string povtor;
class LogicFlick {
private:
    
    string word[100];
    int chWord;
public:
    LogicFlick () { }
    
    void setWords (string w[], int n) {
        chWord = n;
        for (int i = 0; i < n; i++) {     
            word [i] = w [i];
        }
    }
    
    void logic() {
        cout << "[ ";
        for (int i = 0; i < chWord; i++) {     
            if (word [i] == "flick"){
                flick = !flick;
            }
            //cout << flick << " ";
            if (flick == 1) {cout << "true ";}
            if (flick == 0) {cout << "false ";}
            if (i < chWord-1) { cout << ", ";}
        }
        cout << "] ";
    }
}; 
int main() 
{
    LogicFlick a;
    do {
        
        string w [100];
        int chWord;
        
        cout << "Сколько слов будите вводить? - > ";
        cin >> chWord;
        
        for (int i = 0; i < chWord; i++) {     
            cout << "Введите слово -> ";
            cin >> w [i];
        }
        cout << "Введенные Вами слова -> ";
        for (int i = 0; i < chWord; i++) {     
            cout << w [i] << " ";
        }
        cout << endl;
        
        a.setWords(w, chWord); // Передаем слова в объект
        
        
        a.logic(); 
        
        cout << endl; 
        flick = true;
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
    
    } while (povtor == "Y");
    if (povtor== "N") {
        cout << "Жалко...";    
    }    
    return 0;
}
