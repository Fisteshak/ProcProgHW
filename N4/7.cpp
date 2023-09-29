
#include <iostream>

using namespace std;
long int s[101] {};
int main()
{
    long int m, b, c;
    cout << "Введите m, b, c\n";
    cin >> m >> b >> c;
    s[0] = 0;
    for (int i = 0; i < 100; i++) {
        s[i+1] = (s[i]*m + b) % c;
    }
    for (int i = 0; i < 101; i++) {
        cout << s[i] << endl;
    }
}