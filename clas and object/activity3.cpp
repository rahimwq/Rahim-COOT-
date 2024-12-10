#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    void displayArea() {
        cout << "Area of the rectangle: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;

    rect.setDimensions(6.0, 6.0);

    rect.displayArea();

    return 0;
}
