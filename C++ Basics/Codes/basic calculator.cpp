#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "\n--- Arithmetic Operators ---" << endl;
    cout << a << " + " << b << " = " << (a + b) << endl;
    cout << a << " - " << b << " = " << (a - b) << endl;
    cout << a << " * " << b << " = " << (a * b) << endl;
    if(b != 0) {
        cout << a << " / " << b << " = " << (a / b) << endl;
        cout << a << " % " << b << " = " << (a % b) << endl;
    } else {
        cout << "Division and Modulo by zero not allowed!" << endl;
    }

    cout << "\n--- Relational Operators ---" << endl;
    cout << a << " == " << b << " : " << (a == b) << endl;
    cout << a << " != " << b << " : " << (a != b) << endl;
    cout << a << " > " << b << " : " << (a > b) << endl;
    cout << a << " < " << b << " : " << (a < b) << endl;
    cout << a << " >= " << b << " : " << (a >= b) << endl;
    cout << a << " <= " << b << " : " << (a <= b) << endl;

    cout << "\n--- Logical Operators ---" << endl;
    cout << "(" << a << " > 0) && (" << b << " > 0) : " << ((a > 0) && (b > 0)) << endl;
    cout << "(" << a << " > 0) || (" << b << " > 0) : " << ((a > 0) || (b > 0)) << endl;
    cout << "!(" << a << " > 0) : " << (!(a > 0)) << endl;

    cout << "\n--- Assignment Operators ---" << endl;
    int x = a;
    cout << "x = " << x << endl;
    x += b;
    cout << "x += b -> x = " << x << endl;
    x -= b;
    cout << "x -= b -> x = " << x << endl;
    x *= b;
    cout << "x *= b -> x = " << x << endl;
    if (b != 0) {
        x /= b;
        cout << "x /= b -> x = " << x << endl;
        x %= b;
        cout << "x %= b -> x = " << x << endl;
    }

    cout << "\n--- Increment/Decrement Operators ---" << endl;
    cout << "a++ = " << a++ << " (Post-increment)" << endl;
    cout << "Now a = " << a << endl;
    cout << "++a = " << ++a << " (Pre-increment)" << endl;
    cout << "a-- = " << a-- << " (Post-decrement)" << endl;
    cout << "Now a = " << a << endl;
    cout << "--a = " << --a << " (Pre-decrement)" << endl;

    return 0;
}
