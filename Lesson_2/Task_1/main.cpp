#include <iostream>

using namespace std;

int main()
{
    const int num_account = 10;
    double account[num_account] = {0};
    int choise = 0;
    int index = 0;
    double amount = 0;
    double sum = 0;

    bool flag = true;

    while (true) {
    cout << "\nMenu Bank!" << endl;
    cout << "1. Put money in the bank" << endl;
    cout << "2. Withdraw money from the bank" << endl;
    cout << "3. Show all bank accounts" << endl;
    cout << "4. Amount in all bank accounts" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter the action you want --> ";
    cin >> choise;

    flag = true;

    if (choise <= 0 || choise > 4) {
        if (choise == 0) {
            cout << "Exiting program..."  << endl;
            break;
        }
        cout << "Error invalid input enter index from 1 to 4" << endl;
        flag = false;
        continue;
    }

    if (choise == 1 || choise == 2) {
        cout << "\nEnter an account number from 1 to 10 --> ";
        cin >> index;

        if (index < 0 || index > 10) {
            cout << "Error invalid input enter index from 1 to 10" << endl;
            flag = false;
            continue;
        }
    }

    if (flag) {
        switch (choise) {
        case 1:
            cout << "Enter the amount you want to deposit into the account --> ";
            cin >> amount;

            account[index - 1] += amount;
            cout << "Accounts: " << index << " now has " << account[index - 1] << "$" << endl;
            break;

        case 2:
            cout << "Enter the amount to withdraw --> ";
            cin >> amount;

            if (account[index - 1] > amount) {
                account[index - 1] -= amount;
                cout << "Funds successfully withdrawn \nAccount balance " << account[index - 1] << " $" << endl;
            }
            else cout << "Insufficient funds" << endl;
            break;

        case 3:
            cout << "\nAll accounts: " << endl;
            for (int index = 0; index < num_account; index++) {
                cout << index + 1 << " score: " << account[index] << " $" << endl;
            }
            break;

        case 4:
            for (int index = 0; index < num_account; index++) {
                sum += account[index];
            }
            cout << "\nThe amount of money in all accounts " << sum << " $" << endl;
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 0;
        }
    }
    }

    return 0;

}
