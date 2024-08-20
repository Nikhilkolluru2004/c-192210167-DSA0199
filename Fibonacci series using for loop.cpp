#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int t1 = 0, t2 = 1;

        cout << "Fibonacci Series: ";

        for (int i = 1; i <= n; ++i) {
            cout << t1 << ", ";

            int nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
    }

    return 0;
}
