#include <iostream>
#include <cmath>

using namespace std;

//----------Завдання 1 (Proc5.)----------
void RectPS(double x1, double y1, double x2, double y2) {
    //довжини
    double len1 = abs(x2 - x1);
    double len2 = abs(y2 - y1);
    //обчислення
    double S = len1 * len2;
    double P = 2 * (len1 + len2);
    //вивід
    cout << "S = " << S << endl;
    cout << "P = " << P << endl;
}

//----------Завдання 1 (Proc28.)----------
void CircleS(double R) {
    double circ_S = 3.14 * pow(R, 2);
    cout << "Площа круга ---> " << circ_S << endl;
}

//----------Завдання 2 (Integer 17)----------
void Integer17(int num){
    int hund = (num / 100) % 10;
    cout << "Розряд сотень числа " << num << "дорівнює ---> " << hund << endl; 
}

int main() {
    system("chcp 65001 > nul");

    cout << "Завдання 1 (Proc5.)" << endl;
    for (int i = 0; i < 3; ++i) { //цикл для обчислення пл. та пер. 3 рази
        double x1, y1, x2, y2;
        cout << "Введіть координати 2 точок через Space ---> ";
        cin >> x1 >> y1 >> x2 >> y2;
        RectPS(x1, y1, x2, y2); //виклик функції обчислення
    }

    cout << "\nЗавдання 1 (Proc28.)" << endl; //аналогічно до минулого завдання
    for (int i2 = 0; i2 < 3; ++i2) {
        double R;
        cout << "Введіть радіус R ---> ";
        cin >> R;
        CircleS(R);
    }
    cout << "\nЗавдання 2 (Integer 17)" << endl;
    int num;
    cout << "Введіть число більше за 999 ---> ";
    cin >> num;
    Integer17(num);
    return 0;
}
