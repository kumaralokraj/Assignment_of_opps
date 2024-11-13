#include <iostream>
using namespace std;

class Rectangle {
public:
    
    float length;
    float width;

    
    float calculateArea() {
        return length * width;
    }
};

int main() {
    
    Rectangle myRectangle;

    
    myRectangle.length = 5.0;
    myRectangle.width = 3.0;

    cout << "The area of the rectangle is: " << myRectangle.calculateArea() << endl;


}