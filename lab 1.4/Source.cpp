// sourse.cpp
#include "complex_number.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    ComplexNumber c1, c2, result;
    int choice;

    do {
        cout << "\nМеню:\n";
        cout << "1. Введіть комплексне число 1\n";
        cout << "2. Введіть комплексне число 2\n";
        cout << "3. Додавання комплексних чисел\n";
        cout << "4. Віднімання комплексних чисел\n";
        cout << "5. Множення комплексних чисел\n";
        cout << "6. Вихід\n";
        cout << "Оберіть опцію: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введіть комплексне число 1:\n";
            c1.Read();
            break;
        case 2:
            cout << "Введіть комплексне число 2:\n";
            c2.Read();
            break;
        case 3:
            result = c1.Add(c2);
            cout << "Сума: ";
            result.Display();
            break;
        case 4:
            result = c1.Subtract(c2);
            cout << "Різниця: ";
            result.Display();
            break;
        case 5:
            result = c1.Multiply(c2);
            cout << "Добуток: ";
            result.Display();
            break;
        case 6:
            cout << "Вихід...\n";
            break;
        default:
            cout << "Невірний вибір. Будь ласка, спробуйте ще раз.\n";
        }
    } while (choice != 6);

    return 0;
}