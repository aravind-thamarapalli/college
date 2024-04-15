/*Write a program which uses function to swap two integers and two float numbers by using 
reference variable */
#include<iostream>
using namespace std;
void int_swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void float_swap(float *a, float *b){
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x, y;
    cout << "enter the integers" << endl;
    cin>> x >> y;
    int_swap(&x, &y);
    cout<< "after swaping"<< endl;
    cout << x << " "<< y << endl;
    float a,b;
    cout<< "enter the float numbers"<< endl;
    cin >> a >> b;
    float_swap(&a, &b);
    cout<< "after swaping"<< endl;
    cout << a << " " << b;
}