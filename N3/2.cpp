#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double loan(int S, int p, int n) {
    if (S <= 0 or n <= 0) {
        cout << "Значения должны быть больше нуля!\n";
        return 0;
    }
    if (p == 0) {
        return S / (n * 12);
    }
    else {
        double r = double(p) / 100;
        double ch = S * r * pow(1 + r, n);
        double zn = 12*(pow(1 + r, n) - 1);
        double m = ch / zn;
        return m;
    }
}


int main()
{
    int S, n, m;
    cout << "Введите S, n, m\n";
    double closestm = INT32_MAX;
    int pres;
    cin >> S >> n >> m;
    for (int p = -10000; p < 10000; p+=1) {
        double curm = loan(S, p, n);
        if (abs(closestm - m) > abs(curm - m)) {
            closestm = curm;
            pres = p;
        }
    }
    if (abs(closestm - m) > 1) {
        cout << "Ссуда с такими параметрами не может существовать!\n";
    }
    else {
        cout << "Процент p == " << pres;

    }

}