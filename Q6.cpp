#include<iostream>
using namespace std;

int function(int x, int y) {
    if(x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int a, b;
    cout << "Enter the value of A and B" << endl;
    cin >> a >> b;
    int big = function(a, b);
    cout << "Big number is = " << big << endl;
    return 0;
}
