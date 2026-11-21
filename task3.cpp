#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    system("chcp 65001 > nul");
    int v;
    cout << "=== Завдання 3 (Варіант 16) ===" << endl;
    cout << "Розробник: Пасічник Антон, група КН 2/1" << endl;
    cout << "Розлив соку в 2- і 3-літрові банки" << endl;
    cout << "Введіть кількість соку y (л): ";
    cin >> v;
    if (v <= 0) {
        cout << "Помилка: кількість соку має бути додатною!" << endl;
        return 1;
    }
    int k3 = 0, count = 0;
    do {
        int rest = v - 3 * k3;
        if (rest % 2 == 0) {
            count++;
            cout << "Варіант " << count << ": 2-літрових банок - " << rest / 2
                 << ", 3-літрових банок - " << k3 << endl;
        }
        k3++;
    } while (3 * k3 <= v);
    cout << "Усього варіантів розливу: " << count << endl;
    return 0;
}
