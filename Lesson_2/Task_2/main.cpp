#include <iostream>

using namespace std;

int main()
{
    int stars[5];
    int max = stars[0];

    for (int value = 0; value < 5; value++){
        cout << "Enter "<< value + 1 <<" value: ";
        cin >> stars[value];
    }

    for (int num = 0; num < 5; num++) {
        if (max < stars[num])
            max = stars[num];
    }

    for (int rows = 0; rows < max; rows++) {
        for (int colns = 0; colns < 5; colns++){
            if (stars[colns] > rows) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
