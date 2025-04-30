#include <iostream>

using namespace std;

double do_multiplication(double num1, double num2) {
    return num1 * num2;
}

double do_division(double num1, double num2) {
    return num1 / num2;
}

double do_subtraction(double num1, double num2) {
    return num1 - num2;
}

double do_addition(double num1, double num2) {
    return num1 + num2;
}

int main() {
    cout << "Enter the first number: \n";
    double num1;
    cin >> num1;

    cout << "Enter the second number: \n";
    double num2;
    cin >> num2;

    cout << "Enter the operator (+, -, /, *): \n";
    char math_operator;
    cin >> math_operator;
    switch (math_operator) {
        case '+':
            cout << "Result: " << do_addition(num1, num2) << "\n";
            break;
        case '-':
            cout << "Result: " << do_subtraction(num1, num2) << "\n";
            break;
        case '/':
            if (num2 == 0) {
                cout << "Cannot divide by 0 \n";
                break;
            }
            cout << "Result: " << do_division(num1, num2) << "\n";
            break;
        case '*':
            cout << "Result: " << do_multiplication(num1, num2) << "\n";
            break;
        default:
            cout << "Invalid selection. \n";
            break;
    }

    return 0;
}



// g++ -std=c++20 -Wall -Wextra calculator.cpp -o calculator