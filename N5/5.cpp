#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

const int n = 1000;

vector <int> stat(n, 0);
vector <int> m;
int main()
{
    ifstream fin("5in.txt");
    int x;
    while (!fin.eof()) {
        fin >> x;
        m.push_back(x);
        stat[x]++;
        cout << x << ' ';
    }

    cout << endl;

    int max_el = *max_element(stat.begin(), stat.end());

    for (int i = 0; i < m.size(); i++) {
        if (stat[i] == max_el) {
            cout << i << endl;
        }
    }

    sort(m.begin(), m.end());
    ofstream fout("5out.txt");
    for (auto x: m) {
        fout << x << ' ';
        cout << x << ' ';
    }


}