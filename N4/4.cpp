#include <iostream>
#include <string>

using namespace std;

int main()
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 12; j++) {
            cout << "Ж";
        }
        for (int j = 0; j < 28; j++) {
            cout << "_";
        }
        cout << endl;
    }
    for (int i = 0; i < 9; i++) {

        for (int j = 0; j < 40; j++) {
            cout << "_";
        }
        cout << endl;
    }
}