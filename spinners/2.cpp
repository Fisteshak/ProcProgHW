#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int i = 0; i < m / 3 + 10; i++) {
        if (m - i*3 >= 0 and (m - i*3) % 4 == 0) {
            cout << i << ' ' << (m - i*3) / 4 << endl;
            return 0;
        }
    }
    cout << "0 0\n";
}