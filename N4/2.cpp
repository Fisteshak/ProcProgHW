#include <iostream>
#include <string>

using namespace std;

int sign(int n) {
    if (n == 0) return 0;
    if (n > 0) return 1;
    if (n < 0) return -1;
}

int main()
{
    cout << "Введите число: ";
    int x;
    cin >> x;
    switch(sign(x)) {
        case -1: {
            cout << "Число отрицательное" << endl;
            break;
        }
        case 0: {
            cout << "Число равно нулю" << endl;
            break;
        }
        case 1: {
            cout << "Число положительное" << endl;
            break;
        }
    }
}