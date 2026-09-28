#include <iostream>
using namespace std;

double podshet(double ro, double V, double S, double CD) {
    return 0.5 * ro * V * V * S * CD;
}

int main() {
    double S, V, ro, CD, L;
    cout << "Введите площадь крыла S:\n ";
    cin >> S;
    cout << "Введите скорость полета V:\n ";
    cin >> V;
    cout << "Введите плотность воздуха (ro):\n ";
    cin >> ro;
    cout << "Введите коэффициент сопротивления CD:\n ";
    cin >> CD;

    L = podshet(ro, V, S, CD);

    cout << "Аэродинамическое сопротивление L = " << L << endl;
    return 0;
}

