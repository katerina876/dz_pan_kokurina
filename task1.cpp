#include <iostream>
using namespace std;

int main() {
    double S, V, ro, CL, L;
    cout << "Введите площадь крыла S:\n ";
    cin >> S;
    cout << "Введите скорость полета V:\n ";
    cin >> V;
    cout << "Введите плотность воздуха (ro):\n ";
    cin >> ro;
    cout << "Введите коэффициент подъемной силы CL:\n ";
    cin >> CL;

    L = 0.5 * ro * (V * V) * S * CL;

    cout << "Подъемная сила L = " << L << endl;
    return 0;
}

