#include <iostream>
using namespace std;

class Book {
public:
    string bname;
    int price;
    string author;
    void get_details(Book bk);
    void display_details(Book bk);
};
void Book:: display_details(Book bk) {
        cout << "Author: " << bk.author << endl;
        cout << "Book Name: " << bk.bname << endl;
        cout << "Price: $" << bk.price;
    }
 void Book:: get_details(Book bk) {
        bname = bk.bname;
        price = bk.price;
        author = bk.author;
    }
int main() {
    Book b;
    b.bname = "Harry Potter";
    b.price = 5;
    b.author = "J.K. Rowling";
    b.get_details(b);
    b.display_details(b);
}
