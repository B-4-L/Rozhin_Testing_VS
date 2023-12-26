#include <iostream>
#include <string> // Добавляем библиотеку для работы со строками

using namespace std;

int Vvestichislo(string s) { // Изменяем функцию, чтобы она принимала строку в качестве аргумента
    int nomer;
    try {
        nomer = stoi(s); // Преобразуем строку в число
        if (nomer <= 0) { // Проверяем, что число натуральное
            throw "Отрицательное число или 0";
        }
    }
    catch (...) {
        return false; // Если произошла ошибка при преобразовании строки в число, возвращаем false
    }
    return nomer; // Возвращаем натуральное число
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
    string chislo; // Изменяем тип переменной на string
    int nomer = 0;

    cout << "Meню выборa:" << endl;
    cout << "1. Ввести натуральное число X" << endl;
    cout << "2. Найти наибольшую цифру в записи числа X" << endl;
    cout << "3. Найти наименьшую цифру в записи числа X" << endl;
    cout << "Выберите пункт меню: ";
    cin >> chislo; // Теперь считываем строку

    switch (stoi(chislo)) { // Преобразуем строку в число
    case 1:
        nomer = Vvestichislo(chislo); // Передаем строку в функцию
        break;
    case 2:
        nomer = Vvestichislo(chislo);
        cout << "Наибольшая цифра в записи числа Х: " << Maxchislo(nomer) << std::endl;
        break;
    case 3:
        nomer = Vvestichislo(chislo);
        cout << "Наименьшая цифра в записи числа Х: " << Minchislo(nomer) << std::endl;
        break;
    default:
        cout << "Heвeрный выбор" << endl;
        break;
    }

    return 0;
}
