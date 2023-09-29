#include <iostream>
#include <string>

using namespace std;

int gcd(int n, int m)
{
    if (m == 0) {
        return m;
    }
    while (n > m) {
        n -= m;
    }
    return gcd(max(m, n), n);

}

int gcd2(int n, int m)
{
    if (n % m == 0) return m;
    else return (gcd(m, n % m));
}

int main()
{
    int n, m;
    cout << "Введите 2 числа\n";
    cin >> n >> m;
    n = abs(n);
    m = abs(m);
    if (n == 0 or m == 0) {
        if (n == 0 and m == 0) {
            cout << "inf\n";
        }
        else {
            cout << max(n, m) << endl;;
        }
    }
    else {

        cout << gcd(max(n, m), min(n, m));
    }

}