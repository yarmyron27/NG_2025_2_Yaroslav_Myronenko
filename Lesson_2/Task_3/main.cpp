#include <iostream>

using namespace std;

int main()
{
    char line_text[256];
    char vowels[5] = {'a', 'e', 'u', 'o', 'i'};
    int count_consonants = 0, count_vowels = 0;
    int line_lenght = 0;

    cout << "Enter line: ";
    cin.getline(line_text, 256);

    while (line_text[line_lenght] != '\0')
        line_lenght++;

    for (int counter = 0; line_text[counter]; counter++) {
        bool end = false;
        for (int letters = 0; letters < 5; letters++) {
            if (tolower(line_text[counter]) == vowels[letters]) {
                count_vowels++;
                end = true;
                break;
            }
        }
        if (!end)
            count_consonants++;
    }

    double vow_rate = count_vowels * 100 / line_lenght;
    double consonants_rate = count_consonants * 100 / line_lenght;

    cout << "Total number of characters: " << line_lenght << endl;
    cout << "\nNumber of vowel characters in a line: " << count_vowels << endl;
    cout << "Number of silent characters in a line: " << count_consonants << endl;
    cout << "The ratio of vowels: " << count_vowels << " to " << count_consonants << endl;
    cout << "Vowel character ratio per line: " << vow_rate << endl;
    cout << "Silent character ratio per line: " << consonants_rate << endl;
}
