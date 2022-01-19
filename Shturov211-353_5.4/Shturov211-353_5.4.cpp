#include <iostream>
#include "Circle.h";
#include "Position.h";
#include "Square.h";
#include "CircleInSq.h"

using std::cout;
using std::cin;

int main()
{
    setlocale(LC_ALL, "Russian");
    int choise;
    double x, y, side, rad;
    int a = 0;
    while (a == 0)
    {
        std::cout << "Что вы хотите выполнить?" "\n" << "1. Ввод позиции" "\n" << "2. Ввод круга пользователем" "\n" << "3. Ввод радиуса окружности" "\n" << "4. Ввод квадрата пользователем" "\n" << "5. Ввод стороны квадрата" "\n" "6. Ввод окружности в квадрате по радиусу" "\n" "7. Ввод окружности в квадрате по стороне квадрата" "\n" "8. Выход" "\n";
        cin >> choise;
        if (choise == 1) {
            cout << "Введите x и y "; cin >> x >> y;
            Position a(x, y);
            a.out();
        }
        if (choise == 2) {
            cout << "Введите координаты центра и радиус "; cin >> x >> y >> rad;
            Circle a(x, y, rad);
            a.out();
        }
        if (choise == 3) {
            cout << "Введите радиус "; cin >> rad;
            Circle a(rad);
            a.out();
        }
        if (choise == 4) {
            cout << "Введите координаты центра и сторону "; cin >> x >> y >> side;
            Square a(x, y, side);
            a.out();
        }
        if (choise == 5) {
            cout << "Введите сторону "; cin >> side;
            Square a(side);
            a.out();
        }
        if (choise == 6) {
            cout << "Введите координаты центра и радиус "; cin >> x >> y >> rad;
            CircleInSq a(x, y, rad);
            a.Circle::out();
            a.Square::out();
        }
        if (choise == 7) {
            cout << "Введите сторону "; cin >> side;
            CircleInSq a(side);
            a.Circle::out();
            a.Square::out();
        }
        if (choise == 8) {
            a++;
        }
    }
    return 0;
}
