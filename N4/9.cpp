#include <iostream>
#include <string>

using namespace std;

string from_dec(int x, int n)
{
    string res;
    if (n < 2 or n > 36) {
        cout << "Неправильная система счисления!\n";
        exit(0);
    }
    while (x != 0) {
        int k = (x % n);
        char c;
        if (0 <= k and k <= 9) {
            c = char(k + '0');
        } else if ( 10 <= k <= 36) {
            c = char(k - 10 + 'A');
        }
        res = c + res;
        x = x / n;
    }
    return res;
}

int to_dec(string x, int n)
{
    int res = 0;
    if (n < 2 or n > 36) {
        cout << "Неправильная система счисления!\n";
        exit(0);
    }
    for (auto c: x) {
        int k;
        if ('0' <= c and c <= '9') {
            k = int(c - '0');
        } else if ('A' <= c and c <= 'Z') {
            k = int(c + 10 - 'A');
        } else {
            cout << "Неправильный формат числа!\n";
            exit(0);
        }
        if (k >= n) {
            cout << "Неправильный формат числа!\n";
            exit(0);
        }
        res = (res * n) + k;
    }
    return res;
}

string from_x_to_y(string s, int x, int y)
{
    return from_dec(to_dec(s, x), y);
}

int main()
{
    string x1;
    int n1, n2;
    cout << "Введите первое число, исходную систему счисления, целевую систему счисления\n";
    cin >> x1 >> n1 >> n2;

    cout << from_x_to_y(x1, n1, n2);
}