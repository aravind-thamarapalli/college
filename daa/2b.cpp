#include<iostream>
using namespace std;
int count =0;
int fact_rec(int n){
    count++;
    if(n<=0){
        count++;
        cout<<"final count be:"<<count<<endl;
        return 1;
    }
    else{
        count++;
        return n*fact_rec(n-1);
    }
}

int main(){
    int n;
    cout<<"enter the factorial number";
    cin>>n;
    int fact = fact_rec(n);
    cout<<"the factorial :"<<fact;
}