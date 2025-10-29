#include <iostream>

using namespace std;

int main()
{
    int amount = 0;
    cout << "Enter amount: ";
    cin >> amount;
    cout << endl;

    if (amount <= 0) return 1;
    for (int height = 0; height < amount; height++) {
        for (int weight = 0; weight < amount; weight++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n========================" << endl;

    for (int height = 0; height <= amount; height++) {
        for (int weight = 0; weight < height; weight++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
