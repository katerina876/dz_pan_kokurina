#include <iostream>
using namespace std;

int main() {
    double T, L, D, m;
    const double g = 9.81;

    cout << "Введите тягу T:";
    cin >> T;
    cout << T << "\n";
    cout << "Введите подъемную силу L:";
    cin >> L;
    cout << L << "\n";
    cout << "Введите сопротивление D:";
    cin >> D;
    cout << D << "\n";
    cout << "Введите массу самолета m:";
    cin >> m;
    cout << m << "\n";

    double ay = (L - m * g) / m;

    if (ay > 0.5) {
        cout << "Режим: набор высоты\n";
    } 
    else if (ay >= 0 && ay <= 0.5) {
        cout << "Режим: горизонтальный полет\n";
    } 
    else {
        cout << "Режим: снижение\n";
    }
    return 0;
}
