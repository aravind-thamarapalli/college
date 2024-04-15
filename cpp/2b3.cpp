#include<iostream>
using namespace std;
class employee{
    public:
    int empNo;
    string empName;
    int salary;
    employee(int eno, string ename, int sal){
        cout<<"constructor with parameter is used"<<endl;
        empName = ename;
        empNo = eno;
        salary = sal;
    }
    void displayDetails(){
        cout<<"name: "<<empName<<endl;
        cout<<"number: "<<empNo<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};

int main(){
    employee e1(101, "Kumar", 125000);
    e1.displayDetails();

}