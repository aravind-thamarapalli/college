#include<iostream>
using namespace std;
class book{
    public:
    string bname;
    int price;
    string author;
    void displayDetails(){
        cout<<"author name: "<<author<<endl;
        cout<<"book name: "<<bname<<endl;
        cout<<"book price: "<<price<<endl;
    }
};

int main(){
    book b1;
    b1.bname = "all is well";
    b1.author = "man";
    b1.price = 1500;
    b1.displayDetails();
    book b2 = b1;
    b2.displayDetails();
}