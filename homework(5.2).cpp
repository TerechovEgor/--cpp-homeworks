#include <iostream>
#include <string>
using namespace std;
double ch;
int main()
{
    cout << "Введите число -> ";
    cin >> ch;
    if (ch > 0) {
        cout << "Число положительное" << endl;
    }
    else if (ch < 0) {
        cout << "Число отрицательное" << endl;
    }
    else {
        cout << "Равно 0" << endl;
    }
    return 0;
}
