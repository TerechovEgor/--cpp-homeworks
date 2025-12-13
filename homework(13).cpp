#include <iostream>
#include <string>

using namespace std;
string scobText;
string povtor;
class Scoba {
public:
    char otcr;
    char zacr;
    bool valid = false;
    int schet;
    int Nzacr = 0;
    int Notcr = 0;
};
int main() 
{
    Scoba iKrugl, iFigur, iKvadr;
    iKrugl.otcr = '(';
    iKrugl.zacr = ')';
    iKrugl.schet = 0;
    iFigur.otcr = '{';
    iFigur.zacr = '}';
    iFigur.schet = 0;
    iKvadr.otcr = '[';
    iKvadr.zacr = ']';
    iKvadr.schet = 0;
    do {
        iKrugl.valid = false;
        
        iFigur.valid = false;
        
        iKvadr.valid = false;
        
        
        cout << "Введите скобы -> ";
        cin >> scobText;
        
        
        for (int i = 0; i <  scobText.length(); i++) {     
            if (scobText[i] ==  iKrugl.zacr) {
                iKrugl.valid = false;
            }
            if (scobText[i] ==  iKrugl.otcr) {
                cout << scobText[i]<<" ---)i"<< endl;
                iKrugl.schet ++;
                iKrugl.Notcr = i;
                for (int j = i+1; j <  scobText.length(); j++) {  
                    cout << scobText[j]<<" +++)j"<< endl;
                    if (scobText[j] ==  iKrugl.zacr) {
                        iKrugl.valid = true;
                        iKrugl.schet ++;
                        iKrugl.Nzacr = j;
                    }
                }
               
                cout <<endl;
            }
            
            
            
            if (scobText[i] ==  iFigur.zacr) {
                iFigur.valid = false;
            }
            if (scobText[i] ==  iFigur.otcr) {
                cout << scobText[i]<<" ---}i"<< endl;
                iFigur.schet ++;
                iFigur.Notcr = i;
                for (int j = i+1; j <  scobText.length(); j++) {  
                    cout << scobText[j]<<" +++}j"<< endl;
                    if (scobText[j] ==  iFigur.zacr) {
                        iFigur.valid = true;
                        iFigur.schet ++;
                        iFigur.Nzacr = j;
                    }
                }
               
                cout <<endl;
            }
            
            
            
            if (scobText[i] ==  iKvadr.zacr) {
                iKvadr.valid = false;
            }
            if (scobText[i] ==  iKvadr.otcr) {
                cout << scobText[i]<<" ---]i"<< endl;
                iKvadr.schet ++;
                iKvadr.Notcr = i;
                for (int j = i+1; j <  scobText.length(); j++) {  
                    cout << scobText[j]<<" +++]j"<< endl;
                    if (scobText[j] ==  iKvadr.zacr) {
                        iKvadr.valid = true;
                        iKvadr.schet ++;
                        iKvadr.Nzacr = j;
                    }
                }
               
                cout <<endl;
            }
        }
        
        cout << endl;
        cout << iKrugl.schet;
        cout << iFigur.schet;
        cout << iKvadr.schet;
        if (iKrugl.schet != 1) {iKrugl.valid = 1;}
        if (iFigur.schet != 1) {iFigur.valid = 1;}
        if (iKvadr.schet != 1) {iKvadr.valid = 1;}
        cout << endl;
        cout << iKrugl.valid;
        cout << iFigur.valid;
        cout << iKvadr.valid; 
        cout << "( открывается в положении ->" << iKrugl.Notcr << ", а закрывается ) -> " << iKrugl.Nzacr<< endl;
        cout << "{ открывается в положении ->" << iFigur.Notcr << ", а закрывается } -> " << iFigur.Nzacr<< endl;
        cout << "[ открывается в положении ->" << iKvadr.Notcr << ", а закрывается ] -> " << iKvadr.Nzacr<< endl;  
        
        if ((iKrugl.valid == 1)&&(iFigur.valid == 1)&&(iKvadr.valid == 1)) {
            cout << "Вы ввели валидную строку" << endl;
        }
        else {
            cout << "Введенная Вами строка не валидна" << endl;
        }
        iKrugl.schet = 0;
        iFigur.schet = 0;
        iKvadr.schet = 0;
       
       
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
    
    } while (povtor == "Y");
    if (povtor== "N") {
        cout << "Жалко...";    
    }    
    return 0;
}
