#include <iostream>
using namespace std;

int main() {
    float a,b;
    char op;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter b: ";
    cin >> b;

    switch(op) {
        case '+':
            cout << "Result= " <<a + b;
            break;

        case '-':
            cout << "Result= " << a - b;
            break;

        case '*':
            cout << "Result= " << a * b;
            break;

        case '/':
            if (b != 0)
                cout << "Result= " << a / b;
            else
                cout << "Error! Division by zero.";
            break;

        default:
            cout << "Invalid operator!";
            break;
    }

    return 0;
}