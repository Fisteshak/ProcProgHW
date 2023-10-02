#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, n, c;
    cin >> a >> b >> c;
    n = 0;
    while (a + b*(n + 1) <= c) {
        n++;
    }
    cout << n;
}