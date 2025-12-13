#include <iostream>

using namespace std;

int main()
{
    char line [500];
    bool words = false;
    int count = 0;

    cout << "Enter line -->";
    cin.getline(line, 500);

    for (int iterator = 0; line[iterator]; iterator++) {
        if (tolower(line[iterator]) >= 'a' && tolower(line[iterator]) <= 'z') {
            if (!words) {
                words = true;
                count++;
            }
        }
        else words = false;
    }

    cout << "Words in line --> " << count << endl;
    return 0;
}
