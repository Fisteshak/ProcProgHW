#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const double PI = acos(-1);

int main()
{
    double h, r, R, l, S, V;
    cout << "Введите h, R, r, l\n";
    cin >> h >> R >> r >> l;
    if (r == 0 or R == 0 or h == 0 or l == 0) {
        cout << "Конус с данными параметрами не может существовать!";
        return 0;
    }
    if ((R - r)*(R - r) + h*h != l*l) {
        cout << "Конус с данными параметрами не может существовать!";
        return 0;
    }
    V = 1.f / 3.f * PI * h * (R*R + R * r + r * r);
    S = PI * (R * R + (R + r) * l + r*r);
    cout << "V: " << V << endl;
    cout << "S: " << S << endl;
}