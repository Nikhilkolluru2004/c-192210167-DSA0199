#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int t1 = 0, t2 = 1, nextTerm = 0;

        cout << "Fibonacci Series: ";

        for (int i = 1; i <= n; ++i) {
            // Prints the first two terms as 0 and 1
            if (i == 1) {
                cout << t1 << ", ";
            } else if (i == 2) {
                cout << t2 << ", ";
            } else {
                nextTerm = t1 + t2;
                cout << nextTerm << ", ";
                t1 = t2;
                t2 = nextTerm;
            }
        }
    }

    return 0;
}
