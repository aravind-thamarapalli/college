#include<iostream>
using namespace std;
int main(){
    try{
        int num = 4;
        int den = 0;
        if (den == 0)
            throw 0;
        int res = num / den;
        cout << num << " / " << den << " = " << res << endl;  
    }catch(int n){
        cout<<"error: divison by "<<n<<endl;
    }catch(int *p){
        cout<<"error: NULL pointer "<<p<<endl;
    }catch(...){
        cout<<"unknown error";
    }
}