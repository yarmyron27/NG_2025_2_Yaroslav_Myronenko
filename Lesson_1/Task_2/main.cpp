#include <iostream>
#include <cmath>
using namespace std;

char action_func() {
    char action = 0;
    cin >> action;

    if (action == '+' || action == '-' || action == '*'
        || action == '/' || action == '^' || action == 's') {
        return action;
    }
    else {
        cout << "Error: enter invalid action\n";
        cout << "\nEnter correct action (+,-,^,/,s,*):";
        return action_func();
    }
}

void calculator() {
    float num1, num2, result = 0;
    int degree = 0;
    char action = 0;

    cout << "Enter first num:";
    cin >> num1;
    cout << "\nEnter action:";
    action = action_func();

    if (action != '^' && action != 's') {
        cout << "\nEnter second num:";
        cin >> num2;

        switch (action) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result: " << result;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result: " << result;
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result;
            } else {
                cout << "Error: Division by zero\n";
                calculator();
            }
            break;
        }
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

    char exit_or_not = 0;
    cout << "\nIf you want to continue enter \"+\" or \"-\" for exit" << endl;
    cin >> exit_or_not;
    if (exit_or_not == '+')
        calculator();
    else {
        cout << "Goodbye!";
    }
}

int main()
{
    calculator();
    return 0;
}
