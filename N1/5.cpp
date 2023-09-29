#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string daytime, curtain, lamp;
    bool daytimef = false, curtainf = false, lampf = false;
    cout << "Введите время суток (Day / Night / Morning / Evening)\n";
    cin >> daytime;
    cout << "Раздвинуты ли шторы? (Yes / No)\n";
    cin >> curtain;
    cout << "Включена ли лампа? (Yes / No)\n";
    cin >> lamp;
    if (daytime == "Day") daytimef = true;
    else {
        if (daytime != "Night" and daytime != "Morning" and daytime != "Evening") {
            cout << "Неправильный формат ввода!\n";
            return 0;
        }
    }
    if (curtain == "Yes") curtainf = true;
    else {
        if (curtain != "No") {
            cout << "Неправильный формат ввода!\n";
            return 0;
        }
    }

    if (lamp == "Yes") lampf = true;
    else {
        if (lamp != "No") {
            cout << "Неправильный формат ввода!\n";
            return 0;
        }
    }
    if (lampf or daytimef and curtainf) {
        cout << "В комнате светло\n";
    }
    else {
        cout << "В комнате темно\n";
    }


}