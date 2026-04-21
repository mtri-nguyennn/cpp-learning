#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book(string title, string author, double price)
        : title(title), author(author), price(price) {}

    void setPrice(double price) {
        if (price >= 0)
            this->price = price;
    }

    double getPrice() const {
        return price;
    }

    void showInfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1("C++ Basic", "Alex", 19.99);

    b1.showInfo();
    cout << "-----" << endl;

    b1.setPrice(25.5);
    cout << "Updated price: " << b1.getPrice() << endl;

    return 0;
}