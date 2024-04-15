/*Write a program to find the Greatest Common Divisor of two numbers using recursion and 
find how many steps are required to execute it*/
#include<iostream>
using namespace std;
int count=0;
int gcd(int a, int b){
    count++;
    if(a==0){
        count++;
        cout<<"the toal no of steps are: "<<count<<endl;
       return b;
    }
    count++;
    if(b==0){
        count++;
        cout<<"the toal no of steps are: "<<count<<endl;
        return a;
    }
    count++;
    if(a == b){
        count++;
        cout<<"the toal no of steps are: "<<count<<endl;
        return a;
    }
    count++;
    if(a>b){
        count++;
        return gcd(a-b,b);
    }
    else {
        count++;
        return gcd(a,b-a);
    }
}

int main(){
    int a = 3;
    int b = 15;
    int sol = gcd(a,b);
    cout<<sol;
}