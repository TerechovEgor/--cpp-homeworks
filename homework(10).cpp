#include <iostream>
#include <string>

using namespace std;

string povtor;

int main() 
{
    do {
        int size=0;
        int fir, sec, kr;
        kr = 0;
        cout << "Введите размер матрицы -> ";
        cin >> size;
        long nums [size];
        cout << "Заполним ... (Помните, решение поставленной задачи - 1)" << endl;
        for (int i = 0; i < size; i++) {     
            cout << "Введите число -> ";
            cin >> nums [i];
        }
        for (int i = 0; i < size; i++) {     
            cout << nums [i] << " ";
        }
        cout << endl;
        long target;
        cout << "Введите сумму слагаемые которой требуется найти (Помните, решение поставленной задачи - 1) ->";
        cin >> target;
        int sum;
        for (int i = 0; i < size; i++) {     
            cout << nums[i] << "---i"<< endl;
            for (int j = i+1; j < size; j++) {     
                cout << nums[j] << "+++j"<< endl;
                sum = nums[i]+nums[j];
                cout << sum<< "***sum"<<endl;
                if (sum == target) {
                    cout << "круто... Я нашел... Это следующие числа - > " << nums[i] << " и " << nums[j] << endl;
                    cout << "Закончу проверку"<< endl;
                    fir = i;
                    sec = j;
                    kr = kr +1;
                    cout << kr << endl;
                } 
                
            }
           
        }
        if (kr == 0) { 
            cout << "К сожалению, мы не нашли подходящих пар..." << endl;
        } else {
            cout << "Подитожим -> " << nums[fir] << " и " << nums[sec] <<". Их индексы - > "<< fir+1 << " и " << sec+1 << endl;
            if (kr > 1) {
                cout << "Вами было найдено " << kr << " пар. Выведена последняя найденная пара." << endl;
            }
        }
        kr = 0;
        cout << "Хотите повторить? (Y or N)" << endl;
        cin >> povtor;
    
    } while (povtor == "Y");
    if (povtor== "N") {
        cout << "Жалко...";    
    }    
    return 0;
}
