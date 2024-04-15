#include<iostream>
using namespace std;

void sum(int a = 1, int b = 2, int c = 3, int d = 4)
{
    cout<< "sum :"<< a+b+c+d << endl;
}

int main(){
    sum();
    sum(11);
    sum(11, 22);
    sum(11, 22, 33);
}