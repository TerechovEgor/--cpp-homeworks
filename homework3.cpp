#include <iostream>
#include <string>
using namespace std;

int l = 0;
int w = 0;
int perimeter = 0;
int plosh = 0;
int main()
{
    cout << "Введите длину -> ";
    cin >> l;
    cout << "Введите ширину -> ";
    cin >> w;
    perimeter = 2 * l + 2 * w;
    plosh = l * w;
    cout << "Периметр составляет -> " << perimeter << endl;
    cout << "Площадь составляет -> " << plosh << endl;
    return 0;
}
