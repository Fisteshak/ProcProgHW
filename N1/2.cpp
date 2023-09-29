#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cout << "Введите первое число\n";
    cin >> a;
    cout << "Введите второе число\n";
    cin >> b;
    cout << "Сумма:" << a + b << endl;
    cout << "Разность:" << a - b << endl;
    cout << "Произведение:" << a * b << endl;
    if (b != 0) {
        cout << "Частное:" << double(a) / b << endl;

    }
    else {
        cout << "Частное вычислить невозможно!\n" ;
    }

}