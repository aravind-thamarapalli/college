#include<iostream>
using namespace std;

class Book {
public:
    string bname;
    int price;
    string author;

    void get_details() {
        cout << "Enter the author name: ";
        cin >> author;
        cout << "Enter the book name: ";
        cin >> bname;
        cout << "Enter the price: $";
        cin >> price;
    }

    void display_details() {
        cout << "Author: " << author << endl;
        cout << "Book Name: " << bname << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book b[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter the details of book " << i << endl;
        b[i].get_details();
    }
    for (int i = 0; i < 3; i++) {
        b[i].display_details();
    }
}
