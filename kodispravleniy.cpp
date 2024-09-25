#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << endl << "Арифметические действия:" << endl;
    int a = 10, b = 5;

    // +
    cout << "10 + 5 = " << 10 + 5 << endl;
    cout << "2.5 + 3.7 = " << 2.5 + 3.7 << endl;
    cout << "a + b = " << a + b << endl;
    cout << "-5 + 12 = " << -5 + 12 << endl;

    // -
    cout << "10 - 5 = " << 10 - 5 << endl;
    cout << "7.2 - 1.8 = " << 7.2 - 1.8 << endl;
    cout << "a - b = " << a - b << endl;
    cout << "0 - 3 = " << 0 - 3 << endl;

    // ++
    --a;
    cout << "--a = " << a << endl;
    ++a;
    cout << "++a = " << a << endl; 
    cout << "a = " << a << endl;
    cout << "a++ = " << a++ << endl; 
    cout << "a-- = " << a-- << endl;

    // Задание 2
    cout << endl << "Операторы сравнения:" << endl;

    // ==
    cout << "10 == 10: " << (10 == 10) << endl;
    cout << "5 == 7: " << (5 == 7) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "-3 == -3: " << (-3 == -3) << endl;

    // <
    cout << "5 < 10: " << (5 < 10) << endl;
    cout << "10 < 5: " << (10 < 5) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "-4 < -2: " << (-4 < -2) << endl;

    // Задание 3
    cout << endl << "Логические операторы:" << endl;
    a = 10, b = 5;
    int c = 0;

    // !
    cout << "!(a == b): " << !(a == b) << endl; 
    cout << "!(a > b): " << !(a > b) << endl; 
    cout << "!(c != 0): " << !(c != 0) << endl;
    cout << "!(a % 2 == 0): " << !(a % 2 == 0) << endl;

    // &&
    cout << "(a > b) && (b > c): " << ((a > b) && (b > c)) << endl; 
    cout << "(a < b) && (b > c): " << ((a < b) && (b > c)) << endl; 
    cout << "(c == 0) && (a % 2 == 0): " << ((c == 0) && (a % 2 == 0)) << endl; 
    cout << "(a < b) && (c != 0): " << ((a < b) && (c != 0)) << endl; 

    // ||
    cout << "(a > b) || (b > c): " << ((a > b) || (b > c)) << endl;
    cout << "(a < b) || (b > c): " << ((a < b) || (b > c)) << endl; 
    cout << "(c == 0) || (a % 2 == 0): " << ((c == 0) || (a % 2 == 0)) << endl; 
    cout << "(a < b) || (c != 0): " << ((a < b) || (c != 0)) << endl; 
     cout << "-4 < -2: " << (-4 < -2) << endl;

    return 0;
}
