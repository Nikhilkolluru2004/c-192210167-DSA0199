#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int average = (num1 + num2 + num3) / 3;

    cout << "The average of the three integers is: " << average << endl;

    return 0;
}
