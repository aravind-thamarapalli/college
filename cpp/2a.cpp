#include<iostream>
using namespace std;
class car {
    public:
    int carNo;
    string carName;
    int carWeight;
    void displayDetails(){
        cout<<"car no:"<<carNo<<endl;
        cout<<"car name:"<<carName<<endl;
        cout<<"car weight:"<<carWeight<<endl;
    }
};
int main(){
    car c;
    c.carName = "Toyota";
    c.carNo = 1234;
    c.carWeight = 750;
    c.displayDetails();
}