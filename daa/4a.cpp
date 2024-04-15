//Given two strings, find the minimum number of edits required to convert one string to another.
#include<iostream>
using namespace std;
int names(char a[], char b[]){
    int c = 0,i = 0;
    while(a[i] != '\0' || b[i] != '\0'){
        if(a[i] != b[i]){
            c++;
        }
        i++;
    }
    return c;
}

int main(){
    char a[] = "ball";
    char b[] = "lbal";
    int count = names(a,b);
    cout<<count;
}