#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double g = 9.81;
    const double ro = 1.225;
    const double V = 150.0;
    const double S = 30.0;
    const double CL = 1.2;
    const double m = 12000.0;
    const double h = 1000.0;
    double T_min, T_max, dT;

    cout << "Введите минимальную тягу T_min:";
    cin >> T_min;
    cout << T_min << "\n";

    cout << "Введите максимальную тягу T_max:";
    cin >> T_max;
    cout << T_max << "\n";

    cout << "Введите шаг изменения тяги dT:";
    cin >> dT;
    cout << dT << "\n";

    double L = 0.5 * ro * V * V * S * CL;
    double ay = (L - m * g) / m;
    double min_time = 999999.0;
    double best_T = 0.0;
    cout << "\nРезультаты перебора тяги:\n";

    for (double T = T_min; T <= T_max; T += dT) {
        cout << "Текущая тяга T = " << T << " Н | ";

        if (ay > 0) {
            double t = sqrt((2 * h) / ay);
            cout << "Ускорение ay = " << ay << " м/с2 | Время t = " << t << " секунд\n";
            if (t < min_time) {
                min_time = t;
                best_T = T;
            }
        } else {
            cout << "Самолет не может набрать высоту\n";
        }
    }

    cout << "\n----------------------------------------\n";
    if (best_T > 0) {
        cout << "Оптимальное значение тяги: " << best_T << " Н\n";
        cout << "Минимальное время набора высоты: " << min_time << " сек.\n";
    } else {
        cout << "Полет невозможен\n";
    }

    return 0;
}
