#include <iostream>
#include <string>
#include <fstream>


using namespace std;



int main()
{
    string s;

    cout << "Введите строку для записи" << endl;
    getline(cin, s);

    ofstream fout("file.txt");
    fout << s;
    fout.close();
    s.erase();

    ifstream fin("file.txt");
    getline(fin, s);
    cout << s;
    fin.close();



}