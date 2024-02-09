#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    enum difficulty {EASY, NORMAL, HARD};
    int choice;
    cout << "Ваш выбор сложности от 1 до 3, где 1 - Легкий, 2 - Средний, 3 - Тяжёлый: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Вы выбрали лёгкий уровень сложности" << endl;
        break;
    case 2:
        cout << "Вы выбрали средний уровень сложности" << endl;
        break;
    case 3:
        cout << "Вы выбрали тяжёлый уровень сложности" << endl;
        break;
    default:
        cout << "Неверная цифра ввода" << endl;
        break;
    }

    return 0;
}

