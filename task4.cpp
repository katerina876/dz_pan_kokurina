#include <iostream>
using namespace std;

int main() {
    double h, ay, t;
    cout << "Введите высоту h:\n";
    cin >> h;
    cout << "Введите вертикальное ускорение ay:\n";
    cin >> ay;
    if (ay<=0 or h<=0){
    cout <<"Ошибка: ускорение и высота должны быть положительными";
    return 0;
}
    h = 0.5*ay*t*t;

    cout << "Время t = " << t << "секунд "<<endl;
    return 0;
}

