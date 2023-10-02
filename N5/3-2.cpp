#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> stat(256, 0);

bool is_consonant(char c)
{
    c = tolower(c);
    return (c == 'e' or c == 'u' or c == 'o' or c == 'a' or c == 'i');
}

int main()
{
    ifstream fin("3-1.txt");
    string s;
    char c;
    while (!fin.eof()){
        fin >> c;
        stat[int(tolower(c))]++;
    }
    char min_el = '\0';
    stat[min_el] = INT32_MAX;
    for (int i = 1; i < 256; i++) {
        if (stat[i] != 0 and stat[i] < stat[min_el] and is_consonant(i)) {
            min_el = i;
        }
    }

    cout << min_el;
}