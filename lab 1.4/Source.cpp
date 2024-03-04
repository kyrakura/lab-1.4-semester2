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
        cout << "\n����:\n";
        cout << "1. ������ ���������� ����� 1\n";
        cout << "2. ������ ���������� ����� 2\n";
        cout << "3. ��������� ����������� �����\n";
        cout << "4. ³������� ����������� �����\n";
        cout << "5. �������� ����������� �����\n";
        cout << "6. �����\n";
        cout << "������ �����: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "������ ���������� ����� 1:\n";
            c1.Read();
            break;
        case 2:
            cout << "������ ���������� ����� 2:\n";
            c2.Read();
            break;
        case 3:
            result = c1.Add(c2);
            cout << "����: ";
            result.Display();
            break;
        case 4:
            result = c1.Subtract(c2);
            cout << "г�����: ";
            result.Display();
            break;
        case 5:
            result = c1.Multiply(c2);
            cout << "�������: ";
            result.Display();
            break;
        case 6:
            cout << "�����...\n";
            break;
        default:
            cout << "������� ����. ���� �����, ��������� �� ���.\n";
        }
    } while (choice != 6);

    return 0;
}