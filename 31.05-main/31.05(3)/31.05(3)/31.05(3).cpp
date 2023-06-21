#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int dayNumber;

    cout << "Введіть день тижня (1-7): ";
    cin >> dayNumber;

    if (dayNumber == 1) {
        cout << "Понеділоок" << endl;
    }
    else if (dayNumber == 2) {
        cout << "Вівторок" << endl;
    }
    else if (dayNumber == 3) {
        cout << "Середа" << endl;
    }
    else if (dayNumber == 4) {
        cout << "Четвер" << endl;
    }
    else if (dayNumber == 5) {
        cout << "П'ятница" << endl;
    }
    else if (dayNumber == 6) {
        cout << "Субота" << endl;
    }
    else if (dayNumber == 7) {
        cout << "Неділя" << endl;
    }
    else {
        cout << "Некоректний день тижня!" << endl;
    }

    switch (dayNumber) {
    case 1:
        cout << "Понеділок" << endl;
        break;
    case 2:
        cout << "Вівторок" << endl;
        break;
    case 3:
        cout << "Середа" << endl;
        break;
    case 4:
        cout << "Четвер" << endl;
        break;
    case 5:
        cout << "П'ятница" << endl;
        break;
    case 6:
        cout << "Субота" << endl;
        break;
    case 7:
        cout << "Неділя" << endl;
        break;
    default:
        cout << "Некоректний день тижня!" << endl;
        break;
    }

    return 0;
}
