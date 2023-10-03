#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n;
    cin >> n;
    vector <bool> p(n+2, false);
    p[0] = true;
    p[n+1] = true;
    int x;
    cin >> x;
    int last;
    while (x > 0) {
        int max_st = 0, max_end = 0, cur_st, cur_end;

        for (int i = 1; i < n + 2; i++) {
            if (!p[i]) {
                if (p[i-1]) {
                    cur_st  = i;
                    cur_end = i;
                }
                else {
                    cur_end++;
                }
            }
            else {
                if (!p[i-1]) {
                     if (cur_end - cur_st >= max_end - max_st) {
                        max_end = cur_end;
                        max_st = cur_st;
                     }
                }
            }
        }

        int len = max_end - max_st + 1;
        p[max_st + len / 2] = true;
        last = max_st + len / 2;

        for (auto x: p) {
            cout << x;
        }
        cout << endl;
        x--;

    }
    int i = 0;
    while (!p[last + i + 1]) {
        i++;
    }
    int j = 0;
    while (!p[last - j - 1]) {
        j++;
    }

    cout << max (i, j ) << endl << min(i, j);


}