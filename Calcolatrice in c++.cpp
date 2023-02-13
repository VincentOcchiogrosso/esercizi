#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Inserisci due numeri: ";
    cin >> num1 >> num2;

    cout << "Inserisci l'operatore (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
        default:
            cout << "Operatore non valido";
            break;
    }

    return 0;
}

