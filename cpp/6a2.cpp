#include<iostream>
using namespace std;
class Book {
public:
    string bname;
    int price;
    int copies;
    string author;
    int totalprice;
    void get_details(Book bk);
    Book total_price(Book bk);
    void display_details(Book bk);
};
void Book:: get_details(Book bk) {
    bname = bk.bname;
    price = bk.price;
    author = bk.author;
    copies = bk.copies;
    totalprice = 0;
}
Book Book :: total_price(Book bk){
    
    bk.totalprice = bk.price* bk.copies;
    return bk;
}
void Book:: display_details(Book bk) {
        cout << "Author: " << bk.author << endl;
        cout << "Book Name: " << bk.bname << endl;
        cout << "Price: $" << bk.price<<endl;
        cout<<"No. of copies: "<<bk.copies<<endl;
        cout<<"Total price: "<<bk.totalprice<<endl;
    }

int main(){
    Book b;
    b.bname = "Harry Potter";
    b.price = 5;
    b.author = "J.K. Rowling";
    b.copies = 10;
    b.get_details(b);
    Book b1 = b.total_price(b);
    b1.display_details(b1);
}