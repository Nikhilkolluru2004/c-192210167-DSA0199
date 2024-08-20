#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2;

    cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots of the equation are real and distinct." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "The roots of the equation are real and equal." << endl;
        cout << "Root 1: " << root1 << endl;
    } else {
        cout << "The roots of the equation are imaginary." << endl;
    }

    return 0;
}
