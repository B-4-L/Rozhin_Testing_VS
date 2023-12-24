#include <iostream>

using namespace std;

int Vvestichislo() {
    int nomer;
    cout << "Введите натуральное число Х: ";
    cin >> nomer;
    return nomer;
}

int Maxchislo(int nomer) {
    int Max = 0;
    while (nomer > 0) {
        int cifra = nomer % 10;
        if (cifra > Max) {
            Max = cifra;
        }
        nomer = nomer / 10;
    }
    return Max;
}
int Minchislo(int nomer) {
    int Min = 9;
    while (nomer > 0) {

        int cifra = nomer % 10;
        if (cifra < Min) {
            Min = cifra;
        }
        nomer = nomer / 10;
    }
    return Min;
}

int main() {
    int chislo;
    int nomer = 0; // Инициализируем переменную "nomer" значением по умолчанию

    cout << "Meню выборa:" << endl;
    cout << "1. Ввести натуральное число X" << endl;
    cout << "2. Найти наибольшую цифру в записи числа X" << endl;
    cout << "3. Найти наименьшую цифру в записи числа X" << endl;
    cout << "Выберите пункт меню: ";
    cin >> chislo;

    switch (chislo) {
    case 1:
        nomer = Vvestichislo();
        break;
    case 2:
        nomer = Vvestichislo(); // Инициализируем переменную "nomer" перед вызовом функции Maxchislo
        cout << "Наибольшая цифра в записи числа Х: " << Maxchislo(nomer) << std::endl;
        break;
    case 3:
        nomer = Vvestichislo(); // Инициализируем переменную "nomer" перед вызовом функции Minchislo
        cout << "Наименьшая цифра в записи числа Х: " << Minchislo(nomer) << std::endl;
        break;
    default:
        cout << "Heвeрный выбор" << endl;
        break;
    }

    return 0;
}