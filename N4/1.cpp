#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    double x;
    ofstream fout("file41.txt");

    cout << "Введите 10 чисел" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        fout << x << endl;
    }
    fout.close();

    ifstream fin("file41.txt");
    double sum = 0;
    for (int i = 0; i < 10; i++) {
        fin >> x;
        sum += x;
        cout << x << endl;

    }
    cout << setprecision(10) << sum << endl;
    fin.close();

}