#include <iostream>
#include <vector>

using namespace std;

vector <bool> used(10, false);
int res = 0;
void rec(int k, bool f)
{
    if (k == 10) {
        if (f) res++;
        return;
    }
    else {
        for (int i = 0; i < 10; i++) {
            if (!used[i]) {
                used[i] = true;
                if (i == k) {
                    rec(k+1, true);
                }
                else {
                    rec(k+1, f);
                }
                used[i] = false;
            }
        }
    }
}

int main()
{
    rec(0, false);
    cout << res;
}