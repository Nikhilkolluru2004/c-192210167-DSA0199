#include <iostream>

using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') {
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
            character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
            cout << character << " is a vowel." << endl;
        } else {
            cout << character << " is a consonant." << endl;
        }
    } else {
        cout << character << " is not a letter." << endl;
    }

    return 0;
}
