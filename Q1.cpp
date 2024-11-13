#include <iostream>
using namespace std;

class Swapper {
public:
    void swapUsingThirdVar(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    void swapWithoutThirdVar(int &a, int &b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
};

int main() {
    int a = 10;
    int b = 20;
    Swapper swapper;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swapping using a third variable
    swapper.swapUsingThirdVar(a, b);
    cout << "After swap using third variable: a = " << a << ", b = " << b << endl;

    // Resetting values
    a = 10;
    b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swapping without using a third variable
    swapper.swapWithoutThirdVar(a, b);
    cout << "After swap without using third variable: a = " << a << ", b = " << b << endl;

    return 0;
}