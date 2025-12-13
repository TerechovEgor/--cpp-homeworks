#include <iostream>
#include <string>

using namespace std;
string rim;
string povtor;
class PerevodRim {
public:
    char name;
    int znach;
};
int main() 
{
    PerevodRim iI, iV, iX, iL, iC, iD, iM;
    iI.name = 'I';
    iI.znach = 1;
    iV.name = 'V';
    iV.znach = 5;
    iX.name = 'X';
    iX.znach = 10;
    iL.name = 'L';
    iL.znach = 50;
    iC.name = 'C';
    iC.znach = 100;
    iD.name = 'D';
    iD.znach = 500;
    iM.name = 'M';
    iM.znach = 1000;
    do {
        int scI = 0;
        int scV = 0;
        int scX = 0;
        int scL = 0;
        int scC = 0;
        int scD = 0;
        int scM = 0;
        
        
        cout << "Введите римское число -> ";
        cin >> rim;
        int sum = 0;
        
        for (int i = rim.length()-1; i >= 0; i--) {     
            if (rim[i] ==  iI.name){
                scI++;
                sum += iI.znach;
            }
            
            
            
            if (rim[i] ==  iV.name){
                if (rim[i-1] ==  iI.name){ 
                    sum += iV.znach - iI.znach;
                    i -= 1;
                }
                else { sum += iV.znach;}
                scV++;
            }
            
            
            
            if (rim[i] ==  iX.name){
                if (rim[i-1] ==  iI.name){ 
                    sum += iX.znach - iI.znach;
                    i -= 1;
                }
                else { sum += iX.znach;}
                scX++;
            }
            
            
            if (rim[i] ==  iL.name){
                if (rim[i-1] ==  iX.name){ 
                    sum += iL.znach - iX.znach;
                    i -= 1;
                }
                else { sum += iL.znach;}
                scL++;   
            }
            
            
            if (rim[i] ==  iC.name){
                if (rim[i-1] ==  iX.name){ 
                    sum += iC.znach - iX.znach;
                    i -= 1;
                }
                else { sum += iC.znach;}
                scC++;
            }
            
            
            
            if (rim[i] ==  iD.name){
                if (rim[i-1] ==  iC.name){ 
                    sum += iD.znach - iC.znach;
                    i -= 1;
                }
                else { sum += iD.znach;}
                scD++;
            }
            
            
            if (rim[i] ==  iM.name){
                if (rim[i-1] ==  iC.name){ 
                    sum += iM.znach - iC.znach;
                    i -= 1;
                }
                else { sum += iM.znach;}
                scM++;
                
            }
       }
      
        cout << sum << endl;
            
        if (scI >= 4) {cout << "Вы ошиблись, написали (I) " << scI << " раз" << endl;}
        if (scV >= 2) {cout << "Вы ошиблись, написали (V) " << scV << " раз" << endl;}
        if (scX >= 4) {cout << "Вы ошиблись, написали (X) " << scX << " раз" << endl;}
        if (scL >= 2) {cout << "Вы ошиблись, написали (L) " << scL << " раз" << endl;}
        if (scC >= 4) {cout << "Вы ошиблись, написали (C) " << scC << " раз" << endl;}
        if (scD >= 2) {cout << "Вы ошиблись, написали (D) " << scD << " раз" << endl;}
        if (scM >= 4) {cout << "Вы ошиблись, написали (M) " << scM << " раз" << endl;}
       
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
    
    } while (povtor == "Y");
    if (povtor== "N") {
        cout << "Жалко...";    
    }    
    return 0;
}
