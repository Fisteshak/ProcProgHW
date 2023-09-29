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
\
int main()
{
    double c, b;
    cout << "Введите b\n";
    cout << "Введите c\n";
    cin >> b;
    cin >> c;
    lin(b, c);
}