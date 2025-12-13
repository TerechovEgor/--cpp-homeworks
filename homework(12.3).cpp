#include <iostream>
#include <string>

using namespace std;

string povtor;
class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle() {
        width = 5;
        height =5;
    } 
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }
    
    void setWidth(double w) {
        width = w;
    }
    void setHeight(double h) {
        height = h;
    }
    
    double getWidth() {
        return width;
    }
    double getHeight() {
        return height;
    }
    
    double area() {
        return width * height;
    }
    
    void scale (double coeff) {
        height = height * coeff;
        width = width * coeff;
    }
    
    void show () {
        cout << "Ширина прямоугольника - > " << width << endl;
        cout <<"Высота прямоугольника - > " << height << endl;
        cout << "Площадь прямоугольника - > " << area() << endl;
    }
    
};
int main() 
{
    
    do {
        
        
        double w, ww, h, hh, coeff;
        
        cout << "Введите ширину -> ";
        cin >> w;
        cout << "Введите высоту -> ";
        cin >> h;
        Rectangle a;
        Rectangle b (w, h);
        
        cout << endl;  
        
        cout << "Прямоугольник 1:" << endl;
        a.show();
        cout << "Прямоугольник 2:" << endl;
        b.show();
        
        cout << endl;  
        
        cout << "Введите новую ширину -> ";
        cin >> ww;
        cout << "Введите новую высоту -> ";
        cin >> hh;
        
        cout << endl;  
        
        b.setWidth(ww);
        b.setHeight(hh);
        cout << "Измененный прямоугольник 2:" << endl;
        b.show();
        
        cout << "Ширина измененного прямоугольника - > " << b.getWidth() << endl;
        cout << "Высота измененного прямоугольника - > " << b.getHeight() << endl;    
        
        cout << endl;  
        
        cout << "Введите коэффициент - > ";
        cin >> coeff;
        
        cout << "Проведем операцию умножения размеров прямоугольника на введенный Вами коэффициент - >" << coeff << endl; 
        b.scale (coeff);
        b.show();
                
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
    
    } while (povtor == "Y");
    if (povtor== "N") {
        cout << "Жалко...";    
    }    
    return 0;
}
