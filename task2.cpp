#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    system("chcp 65001 > nul");
    double a, y;
    int n;
    cout << "=== Завдання 2 (Варіант 16) ===" << endl;
    cout << "Розробник: Пасічник Антон, група КН 2/1" << endl;
    cout << "Обчислення y = a(a+1)(a+2)...(a+n-1)" << endl;
    cout << "Введіть дійсне a: ";
    cin >> a;
    cout << "Введіть натуральне n: ";
    cin >> n;
    if (n < 1) {
        cout << "Помилка: n має бути натуральним числом!" << endl;
        return 1;
    }
    y = 1;
    int i = 0;
    while (i < n) {
        y *= a + i;
        i++;
    }
    cout << "y = " << y << endl;
    return 0;
}
