#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("3-1.txt");
    string s;
    while (true){
        getline(cin, s);
        if (s == "###") break;
        fout << s << "\n";
    }

}