#include <iostream>
#include <cmath>

using namespace std;
    
int main() {
    system("chcp 65001 > nul"); //для мови
	cout << "ВАРІАНТ 21" << endl;
   //---------Завдання Integer 17---------
    cout << "Завдання1 Integer 17" << endl;
    int sotka; //введення змін
	cout << "Введіть число, більше за 999 --> ";
	cin >> sotka; //надан знач змін користувачем
    cout << "Розряд сотень числа " << sotka << " = " << (sotka/100) % 10 << endl; //обчислення
	
    cout << "" << endl;

    //---------Завдання Integer 30---------
   cout << "Завдання1 Integer 30" << endl;
    int yr;
   cout << "Вкажіть рік для з'ясування століття --> ";
   cin >> yr;
   cout << yr << " рік - це " << (yr - 1)/100 + 1 << " століття" << endl;
   
   cout << "" << endl;
   
   //---------Завдання Integer 33---------
   cout << "Завдання1 Integer 33" << endl;
   int sec;
   cout << "Скільки хвилин пройшло з моменту часу n? -->";
   cin >> sec;
   cout << "З моменту часу n пройшло " << sec/60  << " год. та " << sec%60 << " хв." << endl;
   cout << "" << endl;

   cout << "Завдання2 Boolean 17" << endl ;

   //---------Завдання2 Boolean 17---------
    int chisl;
    cout << "Чи є число непарним та трьохначним? ---> ";
    cin >> chisl;
    bool res = (chisl >= 100 && chisl <= 999 && chisl % 2 != 0); //умови
    cout << boolalpha << res << endl; // Вивкедення значан. true/false
    cout << "" << endl;

    cout << "Завдання2 Boolean 30" << endl;

   //---------Завдання2 Boolean 30---------
    int a, b, c;
    cout << "Введіть сторони a b c трикунтника ---> ";
    cin >> a >> b >> c;
    cout << "Чи є цей трикутник рівностороннім?" << endl;
    bool trik = (a == b && b == c);
    cout << boolalpha << trik << endl;
    cout << "" << endl;


    cout << "Завдання2 Boolean 33" << endl;

   //---------Завдання2 Boolean 33---------
    int a1, b1, c1;
    cout << "Введіть три сторони трикутника ---> ";
    cin >> a1 >> b1 >> c1; 
    cout << "Чи існує такий трикутник?" << endl;
    bool tria = (a1 + b1 > c1 && b1 + c1 > a1 && c1 + a1 > b1);
    cout << boolalpha << tria << endl;
    cout << "" << endl;
    
    //---------Завдання 3---------
    cout << "Завдання 3" << endl;

    float x, znam, chsl, result;
    cout << "Введіть число для виразу ---> ";
    cin >> x;
    chsl = cbrt(abs(pow(x, 2)-2*abs(sin(x))*3*tan(x)))*pow(5, cos(x-12));
    znam = 0.6 + 4*log2(x + 15);
    result = chsl / znam;
    cout << "Значення виразу при х = " << x << " дорівнює "<< result;
    return 0;
}