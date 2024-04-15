/*Write a program that demonstrates function overloading, operator overloading, overriding */
#include<iostream>
using namespace std;

class real{
    public:
    int real;
    int fake;
    
};
void add(int a, int b){
    cout<<"integer addition: "<<(a+b)<<endl;
}

void add(double a, double b){
        cout<<"float addition: "<<(a+b)<<endl;
}

int main(){
    add(10, 20);
    add(1.3, 3.9);
}