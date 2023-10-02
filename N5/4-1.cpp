#include <iostream>
#include <string>

using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                if (i + j + k == m) {
                    cout << i << j << k << endl;
                }
            }
        }
    }
}