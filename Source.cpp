#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "������� ������ �����: ";
    cin >> n;

    cout << "��� �������� ������ ����� : " << n << ": ";
    for (int del = 1; del <= n; del++) {

        if (n % del == 0) {

            cout << del << " , ";
        }
    }

    return 0;
}