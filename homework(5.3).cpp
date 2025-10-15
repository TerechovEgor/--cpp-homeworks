#include <iostream>
#include <string>
using namespace std;
double N;
int main()
{
    cout << "Введите число -> ";
    cin >> N;
    cout << "Числа от 1 до " << N << endl;
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }
    return 0;
}
