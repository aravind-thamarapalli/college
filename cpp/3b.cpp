#include<iostream>
using namespace std;
class demo{
    public:
    int name;
    demo(int name){
        cout<<"constructor"<<name<<endl;
    }
    ~demo(){
        cout<<"destructor"<<name<<endl;
    }

};

int main(){
    demo d1 = demo(1);
    demo d2 = demo(2);
    demo d3 = demo(3);    
}