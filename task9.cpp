#include <iostream>
using namespace std;

int main() {
    const double g = 9.81;
    const double ro = 1.225; 
    const double V = 150.0;
    int n;

    cout << "Введите количество конфигураций самолетов N: ";
    cin >> n;
    cout << n << "\n";

    double* m = new double[n];
    double* S = new double[n];
    double* T = new double[n];
    double* CL = new double[n];
    double* CD = new double[n];

    double max_ay = -999999;
    int leader_id = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nСамолет №" << i + 1 << "\n";

        cout << "Введите массу m: ";
        cin >> m[i];
        cout << m[i] << "\n";

        cout << "Введите площадь крыла S: ";
        cin >> S[i];
        cout << S[i] << "\n";

        cout << "Введите тягу T: ";
        cin >> T[i];
        cout << T[i] << "\n";

        cout << "Введите коэффициент подъемной силы CL: ";
        cin >> CL[i];
        cout << CL[i] << "\n";

        cout << "Введите коэффициент сопротивления CD: ";
        cin >> CD[i];
        cout << CD[i] << "\n";

        double L = 0.5 * ro * V * V * S[i] * CL[i];
        double D = 0.5 * ro * V * V * S[i] * CD[i];
        double ay = (L - m[i] * g) / m[i];

        cout << "Результаты расчета:\n";
        cout << "Подъемная сила L: " << L << "\n";
        cout << "Сопротивление D: " << D << "\n";
        cout << "Ускорение : " << ay << "\n";

        if (ay > max_ay) {
            max_ay = ay;
            leader_id = i + 1;
        }
    }

    cout << "\n----------------------------------------\n";
    cout << "Самолет-лидер с наибольшим ускорением: №" << leader_id << "\n";
    cout << "Его ускорение ay= " << max_ay << "\n";

    delete[] m;
    delete[] S;
    delete[] T;
    delete[] CL;
    delete[] CD;
    return 0;
}
