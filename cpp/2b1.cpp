#include<iostream>
using namespace std;
class bike{
    public:
    int bikeNo;
    string bikeName;
    int bikeWeight;
    bike(){
        cout<<"BIKE DETAILS"<<endl;
    }
    void displayDetails(){
        cout<<"bike no:"<<bikeNo<<endl;
        cout<<"bike name:"<<bikeName<<endl;
        cout<<"bike weight:"<<bikeWeight<<endl;
    }
};

int main(){
    bike b;
    b.bikeNo = 4567;
    b.bikeName = "honda";
    b.bikeWeight = 120;
    b.displayDetails();
}