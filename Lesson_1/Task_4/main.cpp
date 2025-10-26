#include <iostream>

using namespace std;

void drow_row(int amount) {
    if (amount == 0) {
        return;
    }

    cout << "*";
    drow_row(amount - 1);
}

void drow_square(int amount, int count = 0) {
    if (count == amount) return;
    drow_row(amount);
    cout << endl;
    drow_square(amount, count + 1);
}

void drow_triangle(int amount) {
    if (amount == 0) return;
    drow_triangle(amount - 1);
    drow_row(amount);
    cout << endl;
}

int main()
{
    int amount = 0;
    cout << "Enter amount: ";
    cin >> amount;
    drow_square(amount);
    cout << "\n====================\n" << endl;
    drow_triangle(amount);
    return 0;
}
