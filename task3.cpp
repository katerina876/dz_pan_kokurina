#include <iostream>
using namespace std;

int main() {
    const double g=9.81;
    double m, L, D, T, a, ay;
    cout << "Введите массу самолета m:\n ";
    cin >> m;
    cout << "Введите подъемную силу L:\n ";
    cin >> L;
    cout << "Введите сопротивление D:\n ";
    cin >> D;
    cout << "Введите тягу двигателя T:\n ";
    cin >> T;

    a = (T-D)/m;
    ay = (L-m*g)/m;

    cout << "Ускорение по направлению движения a = " << a << endl;
    cout << "Вертикальное ускорение ay = " << ay << endl;
    return 0;
}

