// ����������� ������� ������ ����� �����
#include <iostream>
using namespace std;

int Calc()
{
    int a, b, c;
    float d;
    cout << "��������! ����������� ������� ������ ����� �����.";
    cout << "������ ������ ����� : " << endl;
    cin >> a;
    cout << "������ ������ ����� : " << endl;
    cin >> b;

    c = a + b;
    cout << a << "+" << b << "=" << c << endl;

    c = a - b;
    cout << a << "-" << b << "=" << c << endl;

    c = a * b;
    cout << a << "*" << b << "=" << c << endl;

    d = (float)a / (float)b;
    cout << (float)a << "/" << (float)b << "=" << d << endl;

    system("pause");
    return 0;
}