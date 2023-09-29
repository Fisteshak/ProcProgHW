#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double x, y, b, z;
    cout << "Введите x\n";
    cout << "Введите y\n";
    cout << "Введите b\n";
    cin >> x;
    cin >> y;
    cin >> b;

    if (b - y > 0 and b - x >= 0) {
        z = log(b - y)*sqrt(b - x);
    }
    else {
        cout << "Выражение невозможно вычислить!\n";
        return 0;
    }



    cout << "z == " << z;
}