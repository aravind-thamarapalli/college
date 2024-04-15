#include<iostream>
#include<stdexcept>
using namespace std;
class MyException : public Exception{}
int main(){
    cout<<"enter the branch"<<endl;
    string branch;
    try{
        cin>>branch;
        if(branch!="CSE" && branch!="CSM" && branch!="CSD" && branch!="IT"){
            throw MyException(e);
        }
        else{
            cout<<"your branch is "<<branch;
        }
    }catch(MyException& e)
}