#include <iostream>
#include <vector>

using namespace std;

vector <bool> p(54, false);

int main()
{
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        p[x] = true;
    }

    vector <bool> free(9, false);
    for (int i = 0; i < 9; i++) {
        int x1 = i*4 + 1;
        int x2 = i*4 + 2;
        int x3 = i*4 + 3;
        int x4 = i*4 + 4;

        int b1 = 54 - (i * 2);
        int b2 = 54 - (i * 2) - 1;

        if (p[x1] and p[x2] and p[x3] and p[x4] and p[b1] and p[b2]) {
            free[i] = true;
        }
    }

    int maxlen = 0;
    int curlen = 0;
    for (int i = 1; i < 9; i++) {
        if (free[i]) {
            curlen++;
        }
        else {
            curlen = 0;
        }
        maxlen = max(maxlen, curlen);

    }
    cout << maxlen;
}