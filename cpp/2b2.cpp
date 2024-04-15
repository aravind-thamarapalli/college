#include<iostream>
using namespace std;
class shape{
    public:
    int height;
    int width;
    int area();
    void displayDetails(){
        cout<<"height: "<<height<<endl;
        cout<<"width: "<<width<<endl;
    }
};
int shape::area(){
    cout<<"area:"<<height*width<<endl;
}

int main(){
    shape ob1;
    ob1.height = 10;
    ob1.width = 6;
    ob1.displayDetails();
    ob1.area();
}