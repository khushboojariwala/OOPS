#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero." << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calculator;
    int num1, num2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    int result;

    switch (operation) {
        case '+':
            result = calculator.add(num1, num2);
            break;
        case '-':
            result = calculator.subtract(num1, num2);
            break;
        case '*':
            result = calculator.multiply(num1, num2);
            break;
        case '/':
            result = calculator.divide(num1, num2);
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1; 
    }

    cout << "Result: " << result << endl;

    return 0;
}
