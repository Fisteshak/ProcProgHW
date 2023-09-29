#include <iostream>
#include <string>
#include <cmath>

using namespace std;
const double PI = acos(-1);
double rectangle(double a, double b) {
    if (a < 0 or b < 0) {
        cout << "Данный квадрат не может существовать!\n";
        return 0;
    }
    return a * b;
}

double triangle(double a, double b, double c) {
    if (a < 0 or b < 0 or c < 0) {
        cout << "Данный треугольник не может существовать!\n";
        exit(0);
    }

    if (a + b < c or a + c < b or b + c < a) {
        cout << "Данный треугольник не может существовать!" << endl;
        exit(0);
    }
    double p = (a + b + c) / 2;
    return sqrt(p*(p - a)*(p - b)*(p - c));
}

double circle(double r) {
    if (r < 0) {
        cout << "Данная окружность не может существовать!" << endl;
        exit(0);
    }
    return PI*r*r;
}

int main()
{

    string s = "Площадь какой фигуры вы хотите посчитать?\n 1. Треугольник\n 2. Квадрат\n 3. Окружность\n";
    cout << s;
    int n;
    cin >> n;

    switch (n) {
        case 1: {
            cout << "Введите a, b, c\n";
            double a, b, c;
            cin >> a >> b >> c;
            cout << triangle(a, b, c) << endl;
            break;
        }
        case 2: {
            cout << "Введите a, b\n";
            double a, b;
            cin >> a >> b;
            cout << rectangle(a, b) << endl;
            break;
        }
        case 3: {
            cout << "Введите R\n";
            double r;
            cin >> r;
            cout << circle(r) << endl;
            break;
        }
    }

}