#include <iostream>

using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    int asciiValue = (int)character;

    cout << "The ASCII value of " << character << " is: " << asciiValue << endl;

    return 0;
}
