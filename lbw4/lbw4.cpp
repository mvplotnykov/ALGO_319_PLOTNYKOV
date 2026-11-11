#include <iostream>
#include <cmath>

using namespace std;

//----------Завдання 1 (Proc5.)----------
void RectPS(double x1, double y1, double x2, double y2) {
    double len1 = abs(x2 - x1);
    double len2 = abs(y2 - y1);
    double S = len1 * len2;
    double P = 2 * (len1 + len2);
    cout << "S = " << S << endl;
    cout << "P = " << P << endl;
}

//----------Завдання 1 (Proc28.)----------
void CircleS(double R) {
    double circ_S = 3.14 * pow(R, 2);
    cout << "Площа круга ---> " << circ_S << endl;
}

//----------Завдання 2 (Integer 17)----------
void Integer17(int num) {
    int hund = (num / 100) % 10;
    cout << "Розряд сотень числа " << num << " дорівнює ---> " << hund << endl; 
}

int main() {
    system("chcp 65001 > nul");
    //блок вибору
    int choice; //умови
    do {
        cout << "\n================= МЕНЮ =================" << endl;
        cout << "1. Завдання 1 (Proc5) - Площа та периметр прямокутника" << endl;
        cout << "2. Завдання 1 (Proc28) - Площа круга" << endl;
        cout << "3. Завдання 2 (Integer17) - Цифра сотень числа" << endl;
        cout << "0. Вихід" << endl;
        cout << "========================================" << endl;
        cout << "Виберіть пункт меню (0-3): ";
        cin >> choice;

        switch (choice) {//варіанти
            case 1: {
                cout << "\n--- Завдання 1 (Proc5.) ---" << endl;
                for (int i = 0; i < 3; ++i) {
                    double x1, y1, x2, y2;
                    cout << "Введіть координати 2 точок (x1 y1 x2 y2): ";
                    cin >> x1 >> y1 >> x2 >> y2;
                    RectPS(x1, y1, x2, y2);
                }
                break;
            }
            case 2: {
                cout << "\n--- Завдання 1 (Proc28.) ---" << endl;
                for (int i2 = 0; i2 < 3; ++i2) {
                    double R;
                    cout << "Введіть радіус R: ";
                    cin >> R;
                    CircleS(R);
                }
                break;
            }
            case 3: {
                cout << "\n--- Завдання 2 (Integer 17) ---" << endl;
                int num;
                cout << "Введіть число більше за 999: ";
                cin >> num;
                Integer17(num);
                break;
            }
            case 0: //умова виходу
                cout << "Завершення роботи програми." << endl;
                break;
            default:
                cout << "Помилка: невірний вибір! Спробуйте ще раз." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
