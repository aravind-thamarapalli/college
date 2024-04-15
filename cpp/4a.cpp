/*a) Write a program to use pointers for both base and derived classes and call the member 
functions. */
#include<iostream>
using namespace std;

class brand{
    public:
    string name;
    void display(){
        cout<<"the brand name is: "<<name<<endl;
    }
};
class vehicle: public brand {
    public:
    int number;
    void show(){
        cout<<"brand name: "<<name<<endl;
        cout<<"vehicle number is: "<<number<<endl;
    }
};

int main(){
    brand* brand_pointer;
    brand b;
    vehicle v;
    brand_pointer = &v;
    brand_pointer->name = "bmw";
    brand_pointer->display();
    vehicle* veh_pointer;
    veh_pointer = &v;
    veh_pointer->number = 1234;
    veh_pointer->show();
}