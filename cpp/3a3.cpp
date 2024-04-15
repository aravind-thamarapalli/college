#include<iostream>
using namespace std;
class c1{
    public:
    c1(){
        cout<<"c1 constructor"<<endl;
    }
    ~c1(){
        cout<<"c1 destructor"<<endl;
    }
};

class c2: public c1{
    public:
    c2(){
        cout<<"c2 constructor"<<endl;
    }
    ~c2(){
        cout<<"c2 destructor"<<endl;
    }
};

class c3: public c2{
    public:
    c3(){
        cout<<"c3 constructor"<<endl;
    }
    ~c3(){
        cout<<"c3 destructor"<<endl;
    }
};

int main(){
    c3 c;
    cout<<sizeof(c)<<endl;
    c2 b;
    cout<<sizeof(b)<<endl;
    c1 a;
    cout<<sizeof(a)<<endl;
}