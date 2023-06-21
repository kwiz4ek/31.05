#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int score = 0;
    int answer;

    cout << "Ласкаво просимо до гри \"О, щасливчик!\"" << endl;
    cout << "Відповідайте на наступні питання:" << endl;

    cout << endl << "1. Скільки планет в Сонячній системі?" << endl;
    cout << "   а) 5" << endl;
    cout << "   б) 8" << endl;
    cout << "   в) 10" << endl;
    cout << "   Ваша відповідь: ";
    cin >> answer;

    if (answer == 8) {
        cout << "   Правильно! +1 бал." << endl;
        score++;
    }
    else {
        cout << "   Неправильно. Гра завершена." << endl;
        return 0;
    }

    cout << endl << "2. Яка найбільша планета в Сонячній системі?" << endl;
    cout << "   а) Земля" << endl;
    cout << "   б) Юпітер" << endl;
    cout << "   в) Венера" << endl;
    cout << "   Ваша відповідь: ";
    cin >> answer;

    if (answer == 'б') {
        cout << "   Правильно! +1 бал." << endl;
        score++;
    }
    else {
        cout << "   Неправильно. Гра завершена." << endl;
        return 0;
    }

    cout << endl << "3. Скільки континентів на Землі?" << endl;
    cout << "   а) 4" << endl;
    cout << "   б) 6" << endl;
    cout << "   в) 7" << endl;
    cout << "   Ваша відповідь: ";
    cin >> answer;

    if (answer == 'в') {
        cout << "   Правильно! +1 бал." << endl;
        score++;
    }
    else {
        cout << "   Неправильно. Гра завершена." << endl;
        return 0;
    }

    cout << endl << "4. Який хімічний елемент позначається символом \"H\"?" << endl;
    cout << "   а) Гелій" << endl;
    cout << "   б) Гідроген" << endl;
    cout << "   в) Германій" << endl;
    cout << "   Ваша відповідь: ";
    cin >> answer;

    if (answer == 'б') {
        cout << "   Правильно! +1 бал." << endl;
        score++;
    }
    else {
        cout << "   Неправильно. Гра завершена." << endl;
        return 0;
    }

    cout << endl << "5. Який рік зараз?" << endl;
    cout << "   а) 2021" << endl;
    cout << "   б) 2022" << endl;
    cout << "   в) 2023" << endl;
    cout << "   Ваша відповідь: ";
    cin >> answer;

    if (answer == 'в') {
        cout << "   Правильно! +1 бал." << endl;
        score++;
    }
    else {
        cout << "   Неправильно. Гра завершена." << endl;
        return 0;
    }

    cout << endl << "Ви набрали " << score << " бали." << endl;
    if (score == 5) {
        cout << "Вітаємо! Ви перемогли!" << endl;
    }
    else {
        cout << "Спробуйте ще раз!" << endl;
    }

    return 0;
}
