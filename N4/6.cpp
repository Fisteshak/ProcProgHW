#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

map<string, int> comb;
map<string, int> dict;

const int dict_size = 7;
const int comb_size = 6;
void init()
{
    dict["I"] = 1;
    dict["V"] = 5;
    dict["X"] = 10;
    dict["L"] = 50;
    dict["C"] = 100;
    dict["D"] = 500;
    dict["M"] = 1000;

    comb["IV"] = 4;
    comb["IX"] = 9;
    comb["XL"] = 40;
    comb["XC"] = 90;
    comb["CD"] = 400;
    comb["CM"] = 900;
}

int roman_to_dec(string rom)
{
    vector<int> sep_num;
    int i = 0;
    int lowest = INT32_MAX;
    while (i < rom.length()) {
        auto t = rom.substr(i, 1);
        auto t2 = rom.substr(i, 2);
        if (rom.length() - i >= 2) {

            if (comb.find(t2) != comb.end()) {
                sep_num.push_back(comb[t2]);
                //lowest = comb[t2];
                i += 2;
                continue;
            }
        }
        if (dict.find(t) != dict.end()) {
            sep_num.push_back(dict[t]);
            //lowest = comb[t];
            i += 1;
            continue;
        }
        return -3;
    }

    int sum = 0;

    for (int i = 0; i < int(sep_num.size()) - 3; i++) {
        if (sep_num[i] == sep_num[i+1] and sep_num[i+1] == sep_num[i+2] and sep_num[i+2] == sep_num[i+3]) {
            return -2;
        }
    }
    for (int i = 0; i < int(sep_num.size()) - 1; i++) {
        if (sep_num[i] < sep_num[i+1]) {
            return -1;
        }
    }
    for (auto x : sep_num) {
        //cout << x << endl;
        sum += x;
    }
    return sum;
}

int main()
{
    init();
    cout << "Введите римское число\n";
    string s;
    cin >> s;

    int num =  roman_to_dec(s);
    if (num == 0) {
        cout << num << endl;
    }
    else {
        cout << "Данная строка не является корректным римским числом!\n";
        cout << num;
    }
}