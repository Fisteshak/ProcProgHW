#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;
int n = 21, m = 120;
vector <vector <char>> graph(n, vector<char>(m*4, '.'));

void write()
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << graph[i][j];
        }
        cout << endl;
    }
}

int main()
{

    for (double x = 0; x < m / 10; x+=0.10) {

            int ys = round(sin(x) * 10) + 10;
            int xs = x * 10;
            graph[ys][xs] = '*';

    }
    write();
}