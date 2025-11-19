#include <iostream>
#include <string>

using namespace std;

string povtor;
int schet;
string word;
int main() 
{
    do {
        cout << "Введите слово -> ";
        getline (cin, word); // не получалось иначе
        
     
        for (int i = 0; i < word.length() ; i++) {
            cout << word[i] << "****"<< endl;
            
            int vp;
        
            
            for (vp = i+1; vp < word.length(); vp++) {
            
                
                if (word[i] == word[vp] && word[i] != ' '){
                    cout << "  ===  "<<endl;
                    schet ++;
                }
            
                
            }
            vp = 0;
        }
        if (schet != 0){
            cout << "Это слово не изограмма" << endl;
        }
        else { cout << "Это слово изограмма" << endl;}
        
        cout <<endl;
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
        cin.ignore();
    } while (povtor == "Y");
    if (povtor== "N") {
        cout << "Жалко...";    
    }    
    return 0;
}
