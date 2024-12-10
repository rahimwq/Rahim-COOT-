#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car myCar;

    myCar.brand = "Bugatti";
    myCar.model = "Mistral";
    myCar.year = 2020;

    myCar.displayInfo();

    return 0;
}
