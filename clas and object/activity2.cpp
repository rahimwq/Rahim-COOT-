#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book(string t, string a, double p) : title(t), author(a), price(p) {}

    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book book1("To Kill a Mockingbird", "Harper Lee", 15.00);
    Book book2("Harry Potter", "J.K. Rowling", 12.00);

    cout << "Details of Book 1:" << endl;
    book1.displayDetails();

    cout << endl;

    cout << "Details of Book 2:" << endl;
    book2.displayDetails();

    return 0;
}
