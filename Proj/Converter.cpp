
#include "Begin.h"
#include <conio.h>
#include <iostream>
void Convert() {
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    int inp, chos;
    char cont[33], ext;
    cout << "������� �����: ";
    cin >> inp;
    cout << "������� ������� ��������� � ������� ����� ��������� �����:" << endl;
    cout << "1. � ����������������� ������� ���������" << endl;
    cout << "2. � ���������� ������� ���������" << endl;
    cout << "3. � ������������ ������� ���������" << endl;
    cout << "4. � �������� ������� ���������" << endl;
    cout << "��������: ";
    cin >> chos;
    switch (chos) {
    case 1:
        _itoa_s(inp, cont, 16);
        cout << "���� �����: " << cont << endl;
        break;
    case 2:
        _itoa_s(inp, cont, 10);
        cout << "���� �����: " << cont << endl;
        break;
    case 3:
        _itoa_s(inp, cont, 8);
        cout << "���� �����: " << cont << endl;
        break;
    case 4:
        _itoa_s(inp, cont, 2);
        cout << "���� �����: " << cont << endl;
        break;
    }
    cout << "������� exit ��� ������ ��� r ��� ������� ����" << endl;
    cin >> ext;
    if (ext == 'r') {
        system("cls");
        Convert();
    }
}

