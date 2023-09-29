#include <iostream>
#include <string>

using namespace std;
int n;
int main()
{
    cout << "Введите число N\n";
    cin >> n;
    if (n <= 0) {
        cout << "Число не натуральное!\n";
        return 0;
    }
    for (int i = 0; i < 10; i++) {
        cout << n + i << endl;
    }
}