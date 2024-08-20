#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 == num2) {
        cout << "The two numbers are equal." << endl;
    } else {
        cout << "The two numbers are not equal." << endl;
    }

    return 0;
}
