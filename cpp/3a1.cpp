//a) Write a program that illustrates the following forms of inheritances 
#include<iostream>
using namespace std;
class Brand{
    protected:
    string name;
    int price;
    void brand_setter(){
        cout<<"enter the brand name";
        cin>>name;
        cout<<"enter the price of the vehile";
        cin>>price;
    }
};
class Model: protected Brand{
    public:
    int model;
    string series;
    void model_setter(){
        cout<<"enter the model number";
        cin>>model;
        cout<<"enter the series of the vehile";
        cin>>series;
    }

    void display(){
        brand_setter();
        cout<<"brand: "<<name<<endl;
        cout<<"price: "<<price<<endl;
        cout<<"model: "<<model<<endl;
        cout<<"series: "<<series<<endl;
    }
};

class type: protected Model{
    public:
    string type;
    void type_setter(){
        cout<<"enter the type"<<endl;
        cin>>type;
    }
    void dispaly(){
        cout<<"brand: "<<name<<endl;
        cout<<"price: "<<price<<endl;
        cout<<"type: "<<type<<endl;

    }
};
int main(){
    Model m;
    m.model_setter();
    m.display();
    type t;
    t.type_setter();
    t.dispaly();
}