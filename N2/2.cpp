#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double x, a, w;
    cout << "Введите x\n";
    cout << "Введите a\n";
    cin >> x;
    cin >> a;
    if (abs(x) < 1) {
        if (x != 0) {
            w = a * log(abs(x));
        }
        else {
            cout << "Выражение невозможно вычислить!";
            return 0;
        }
    }
    else {
        double podkor = a - x * x;
        if (podkor >= 0) {
            w = sqrt(podkor);
        }
        else {
            cout << "Выражение невозможно вычислить!";
            return 0;
        }
    }
    cout << "w == " << w;
}