#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main() {
    system("chcp 65001 > nul");
    int n;
    cout << "=== Завдання 1 (Варіант 16) ===" << endl;
    cout << "Розробник: Пасічник Антон, група КН 2/1" << endl;
    cout << "Добуток усіх натуральних парних чисел від 20 до n" << endl;
    cout << "Введіть n: ";
    cin >> n;
    if (n < 20) {
        cout << "Помилка: n має бути не меншим за 20!" << endl;
        return 1;
    }
    double p = 1;
    cout << "Парні числа: ";
    for (int i = 20; i <= n; i += 2) {
        cout << i << " ";
        p *= i;
    }
    cout << endl;
    cout << fixed << setprecision(0);
    cout << "Добуток = " << p << endl;
    return 0;
}
