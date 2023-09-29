#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool is_digit_char(char c) {
    return ('0' <= c and c <= '9' or c == '.');
}

int main()
{
    string s;

    ifstream fin("file.txt");
    if (!fin.is_open()) {
        cout << "Не удалось открыть файл!" << endl;
        return 0;
    }
    char c;
    bool space = false;
    while (!fin.eof()) {
        fin >> s;
        string num;
        s = s + '#';
        for (auto x: s) {
            if (is_digit_char(x)) {
                num += x;
            }
            else {
                if (!num.empty()) cout << num << endl;
                num = "";
            }
        }

    }
    fin.close();

}