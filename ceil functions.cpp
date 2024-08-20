#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float number;

    cout << "Enter a floating-point number: ";
    cin >> number;

    int roundedFloor = floor(number);
    int roundedCeil = ceil(number);

    cout << "Rounded down to the nearest integer: " << roundedFloor << endl;
    cout << "Rounded up to the nearest integer: " << roundedCeil << endl;

    return 0;
}
