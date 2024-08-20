#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    string result = (num1 == num2) ? "The two numbers are equal." : "The two numbers are not equal.";

    cout << result << endl;

    return 0;
}
