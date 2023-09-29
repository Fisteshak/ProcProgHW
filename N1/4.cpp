#include <iostream>
#include <cmath>

using namespace std;

void lin(double b, double c)
{
    if (b == 0) {
        if (c == 0) {
            cout << "x - любое число\n";
        }
        else {
            cout << "Решений нет!\n";
        }
    }
    else {
        cout << "x == " << (-c) / b << endl;
    }

}

void kvadr(double a, double b, double c) {
    double D = b*b - 4 * a * c;
    if (D < 0) {
        cout << "Решений нет!\n";

    } else if (D == 0) {
        double x = double(-b) / (2 * a);
        cout << "x == " << x;
    } else if (D > 0) {
        double x1 = double(-b + sqrt(D)) / (2 * a);
        double x2 = double(-b - sqrt(D)) / (2 * a);
        cout << "x1 == " << x1 << endl;
        cout << "x2 == " << x2 << endl;
    }

}

int main()
{
    double a, b, c;
    cout << "Введите a\n";
    cout << "Введите b\n";
    cout << "Введите c\n";
    cin >> a;
    cin >> b;
    cin >> c;

    if (a == 0) {
        lin(b, c);
    }
    else {
        kvadr(a, b, c);
    }
}