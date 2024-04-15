#include<iostream>
using namespace std;

template <typename T>
 T add(T x, T y){
    T res = x+y;
    return res;
}

int main(){
    cout<<"enter the int numbers"<<endl;
    int x,y;
    cin>>x>>y;
    int rs = add(x,y);
    cout<<"integer sum is: "<< rs<<endl;
    cout<<"enter the floating numbers"<<endl;
    float a,b;
    cin>>a>>b;
    float res = add(a,b);
    cout<<"float sum is: "<< res<<endl;    
}