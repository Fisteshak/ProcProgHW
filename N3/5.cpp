#include <iostream>
#include <string>
#include <random>
using namespace std;

int main()
{
    string s;
    srand(time(NULL));
    for (int i = 0; i < 30; i++) {
        s.push_back('A' + (rand() % 26));
    }
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size() - 1; j++) {
            if (s[j] > s[j + 1]) {
                swap(s[j], s[j + 1]);
            }
        }
    }
    cout << s;

}