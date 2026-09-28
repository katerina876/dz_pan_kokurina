#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Введите количество элементов в массивах n:\n";
    cin >> n;

    double* V = new double[n];
    double* ro = new double[n];

    cout << "Введите значения скорости V:\n";
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }

    cout << "Введите значения плотности воздуха ro:\n";
    for (int i = 0; i < n; i++) {
        cin >> ro[i];
    }
    
    cout << fixed << setprecision(2);
    cout << "\n Шаг |  Скорость  | Плотность  |  Подъемная сила \n";
    cout << "--------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        double L = 0.5 * ro[i] * V[i] * V[i];
        
        cout << setw(4) << i + 1 << " | " 
             << setw(10) << V[i] << " | " 
             << setw(10) << ro[i] << " | " 
             << setw(15) << L << "\n";
    }

    delete[] V;
    delete[] ro;
    return 0;
}
