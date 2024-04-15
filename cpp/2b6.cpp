#include<iostream>
using namespace std;
class name{
    public:
    string surname;
    string middlename;
    string lastname;
    name();
    void fullname(){
        cout<<"full name is "<<surname+middlename+lastname<<endl;
    }
};
name:: name(){
    cout<<"constructor outside class is used"<<endl;
}

int main(){
    name n;
    n.surname = "Sanku ";
    n.middlename = "Raghav ";
    n.lastname = "Reddy ";
    n.fullname();
}