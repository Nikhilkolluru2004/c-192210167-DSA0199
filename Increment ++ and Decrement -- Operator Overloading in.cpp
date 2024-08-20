#include <iostream>

using namespace std;

class Counter {
public:
    int value;

    Counter(int initialValue = 0) : value(initialValue) {}

    Counter operator++() {
        value++;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    Counter operator--() { 
        value--;
        return *this;
    }

    Counter operator--(int) { 
        Counter temp = *this;
        value--;
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c1(10);
    ++c1;
    c1.display();

    c1++;
    c1.display();

    --c1;
    c1.display();

    c1--;
    c1.display();

    return 0;
}
