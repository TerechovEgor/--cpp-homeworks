#include <iostream>
#include <string>

using namespace std;
bool flick = true;
string povtor;
class Okruzn {
private:
    int coordsCentr[2];
    int coordsTochk[2];
    int radOcr;
public:
    Okruzn() {}
    void setCoords (int c[], int r, int t[]) {
        for (int i = 0; i <= 1; i++) {     
            coordsCentr [i] = c [i];
            coordsTochk [i] = t [i];
        }
        radOcr = r;
    }
    
    void proverkaPrinadl () {
        int centrX, centrY, tochkaX, tochkaY;
        centrX = coordsCentr [0];
        centrY = coordsCentr [1];
        tochkaX = coordsTochk [0];
        tochkaY = coordsTochk [1];
        if (((tochkaX - centrX)*(tochkaX - centrX) + (tochkaY - centrY)*(tochkaY - centrY)) == (radOcr*radOcr)) {
            cout << "Точка лежит на границе окружности" << endl;
        }
        if (((tochkaX - centrX)*(tochkaX - centrX) + (tochkaY - centrY)*(tochkaY - centrY)) < (radOcr*radOcr)) {
            cout << "Точка лежит внутри окружности" << endl;
        }
        if (((tochkaX - centrX)*(tochkaX - centrX) + (tochkaY - centrY)*(tochkaY - centrY)) > (radOcr*radOcr)) {
            cout << "Точка лежит вне окружности" << endl;
        }
    }
};   
int main() 
{
    Okruzn a;
    do {
        int centr[2];
        int tochka [2];
        int rad;
        cout << "Введите координаты центра окружности: " << endl;
        cout << "Введите значение X - > ";
        cin >> centr [0];
        cout << "Введите значение Y - > ";
        cin >> centr [1];
        
        cout << "Вы ввели следующие координаты центра окружности: (";
        for (int i = 0; i <= 1; i++) {
            cout << centr [i];
            if (i < 1) { cout << ", ";}
        }
        cout << ")" << endl;
        
        cout << "Введите радиус окружности - > ";
        cin >> rad;
        
        cout << "Введите координаты искомой точки: " << endl;
        cout << "Введите значение X - > ";
        cin >> tochka [0];
        cout << "Введите значение Y - > ";
        cin >> tochka [1];
        cout << "Вы ввели следующие координаты искомой точки: (";
        for (int i = 0; i <= 1; i++) {
            cout << tochka [i];
            if (i < 1) { cout << ", ";}
        }
        cout << ")" << endl;
        
        a.setCoords(centr, rad, tochka);
        a.proverkaPrinadl();
        
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
    
    } while (povtor == "Y");
    if (povtor== "N") {
        cout << "Жалко...";    
    }    
    return 0;
}
