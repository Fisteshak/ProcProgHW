#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    double S, p, n;
    cout << "Введите S, p, n\n";
    cin >> S >> p >> n;
    if (S <= 0 or n <= 0) {
        cout << "Значения должны быть больше нуля!\n";
        return 0;
    }
    if (p == 0) {
        cout << S / (n * 12) << endl;
    }
    else {
        double r = double(p) / 100;
        double ch = S * r * pow(1 + r, n);
        double zn = 12*(pow(1 + r, n) - 1);
        double m = ch / zn;
        cout << m << endl;
    }
}