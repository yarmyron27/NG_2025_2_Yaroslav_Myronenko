#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num1, num2, result = 0;
    int degree = 0;
    char action = 0;

    cout << "Enter first num:";
    cin >> num1;

    cout << "\nEnter action:";
    cin >> action;

    if (action == '+' || action == '-' || action == '*' || action == '/') {
        cout << "\nEnter second num:";
        cin >> num2;

        switch (action) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero\n";
                return 1;
            }
            break;

        default:
            cout << "Error: Invalid operation." << endl;
            return 1;
        }

        cout << "Result: " << result << endl;
    }
    else if (action == '^') {
        cout << "Enter degree: ";
        cin >> degree;
        result = pow(num1, degree);
        cout << "\nNumber raised to the degree of " << degree << ": " << result << endl;
    }
    else if (action == 's') {
        if (num1 < 0) cout << "\nError: Cannot take square root of the first number (negative)" << endl;
        else {
            result = sqrt(num1);
            cout << "\nSquare root of the first number: " << result << endl;
        }
    }
    else {
        cout << "Error action operation" << endl;
        return 1;
    }

    return 0;
}
