#include <iostream>
#include <vector>
using namespace std;

struct Aircraft {
    int id;
    double m, T, S, CL, CD, ay, t;
};

int main() {
    const double g = 9.81;
    double ro, V, h;
    int n;

    cout << "Введите плотность воздуха ro: ";
    cin >> ro;
    cout << ro << "\n";

    cout << "Введите скорость V: ";
    cin >> V;
    cout << V << "\n";

    cout << "Введите заданную высоту h: ";
    cin >> h;
    cout << h << "\n";

    cout << "Введите количество самолетов n: ";
    cin >> n;
    cout << n << "\n";

    vector<Aircraft> planes(n);

    for (int i = 0; i < n; i++) {
        planes[i].id = i + 1;
        cout << "\nСамолет №" << planes[i].id << "\n";

        cout << "Введите массу m: ";
        cin >> planes[i].m;
        cout << planes[i].m << "\n";

        cout << "Введите тягу T: ";
        cin >> planes[i].T;
        cout << planes[i].T << "\n";

        cout << "Введите площадь крыла S: ";
        cin >> planes[i].S;
        cout << planes[i].S << "\n";

        cout << "Введите коэф. подъемной силы CL: ";
        cin >> planes[i].CL;
        cout << planes[i].CL << "\n";

        cout << "Введите коэф. сопротивления CD: ";
        cin >> planes[i].CD;
        cout << planes[i].CD << "\n";

        double L = 0.5 * ro * V * V * planes[i].S * planes[i].CL;
        
        planes[i].ay = (L - planes[i].m * g) / planes[i].m;

        if (planes[i].ay > 0) {
            h = 0.5*planes[i].ay*planes[i].t*planes[i].t;
        } else {
            planes[i].t = 999999;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (planes[j].t > planes[j + 1].t) {
                Aircraft temp = planes[j];
                planes[j] = planes[j + 1];
                planes[j + 1] = temp;
            }
        }
    }

    cout << "\nРезультаты (отсортированы по времени):\n";
    for (int i = 0; i < n; i++) {
        cout << "Самолет №" << planes[i].id << " | Ускорение: " << planes[i].ay;
        if (planes[i].t == 999999) {
            cout << " | Не может набрать высоту\n";
        } else {
            cout << " | Время t: " << planes[i].t << " секунд\n";
        }
    }

    return 0;
}
