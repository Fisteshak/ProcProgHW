#include <iostream>
#include <string>
using namespace std;

int main()
{
    double y;
    double x = -4;
    while (x <= 4) {
        if (x - 1 != 0) {
            y = (x*x - 2*x + 2) / (x - 1);
            cout << "x == " << x << "  y == " << y << endl;
        }
        else {
            cout << "x == " << x << "  y не существует " << endl;
        }
        x += 0.5;
    }
}