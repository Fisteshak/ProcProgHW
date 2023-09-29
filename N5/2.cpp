#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <bool> m;

void mark_primes(vector <bool> &m, int n)
{
    for (int i = 2; i*i <= n; i++) {
        for (int j = i*i; j <= n; j += i) {
            m[j] = false;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    m.assign(n + 1, true);
    mark_primes(m, n);
    for (int i = 2; i <= n; i++ ) {
        if (m[i]) cout << i << ' ';
    }
}