#include <iostream>

using namespace std;

int main()
{
    int income;
    int tax;
    
    cout << "Программа для расчёта Вашего налога\n\n";
    cout << "Введите ваш доход: ";
    cin >> income;
    
    if (income == 0) {
        cout << "Неужели Вы ничего не заработали? Пора вызывать налогового инспектора!\n";
    }
    else if (income < 0) {
        cout << "Доход должен быть положительным: ";
        cin >> income;
    }

    cout << "-----Cчитаем-----\n";

    if (income > 50000) {
        tax = (income - 50000) * 0.3 + 40000 * 0.2 + 10000 * 0.13;
    }
    else if (income > 10000) {
        tax = (income - 10000) * 0.2 + 10000 * 0.13;
    }
    else {
        tax = income * 0.13;
    }

    cout << "Ваш налог: " << tax << endl;

    return 0;
}