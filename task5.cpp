#include <iostream>
using namespace std;

int main() {
    const double g = 9.81;
    double V, ro, h, t;
    double best_time = 999999;
    int best_plane = 0;
    
    cout << "Введите скорость полета V:\n";
    cin >> V;
    cout << "Введите плотность воздуха ro:\n";
    cin >> ro;
    cout << "Введите высоту для набора h:\n";
    cin >> h;

    double times[3];
    for (int i = 0; i < 3; i++) {
        double m, S, T, CL, CD;
    switch (i+1) {
        case 1:
            m = 10000; S = 28; T = 48000; CL = 1.1; CD = 0.04;
            cout << "\nВыбран Самолет №1\n";
            break;
        case 2:
            m = 12000; S = 30; T = 50000; CL = 1.2; CD = 0.05;
            cout << "\nВыбран Самолет №2\n";
            break;
        case 3:
            m = 15000; S = 35; T = 60000; CL = 1.3; CD = 0.06;
            cout << "\nВыбран Самолет №3\n";
            break;
    }

    double L = 0.5 * ro * V * V * S * CL;
    double D = 0.5 * ro * V * V * S * CD;
    double ay = (L - m * g) / m;

    cout << "Самолет №" << i + 1<< "\n";
    cout << "Подъемная сила L = " << L << "\n";
    cout << "Сопротивление D = " << D << "\n";
    cout << "Вертикальное ускорение ay = " << ay << "\n";

        if (ay > 0) {
            h = 0.5*ay*t*t;;
            cout << "Время t = " << t << " секунд\n";

            if (t < best_time) {
                best_time = t;
                best_plane = i + 1; 
            }
        } else {
            cout << "Самолет не сможет набрать высоту\n";
        }
    } 

    if (best_plane == 0) {
        cout << "\nНи один из самолетов не смог взлететь\n";
    } else {
        cout << "\nБыстрее всех высоту наберет Самолет №" << best_plane <<endl;
    }
}
