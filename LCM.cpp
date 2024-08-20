#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b) {
    int result = (a * b) / gcd(a, b);
    return result;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = lcm(num1, num2);
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
