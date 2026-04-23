#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    double num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nChoose operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Enter choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result = " << add(num1, num2);
            break;
        case 2:
            cout << "Result = " << subtract(num1, num2);
            break;
        case 3:
            cout << "Result = " << multiply(num1, num2);
            break;
        case 4:
            if (num2 == 0)
                cout << "Error: Division by zero!";
            else
                cout << "Result = " << divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}