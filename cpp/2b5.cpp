#include<iostream>
using namespace std;
class laptop{
    public:
    string name;
    int price;
    laptop(string nae, int pri){
        name = nae;
        price = pri;
        cout<<"constructor used"<<endl;
    }
    void details(){
        cout<<"laptop name: "<<name<<endl;
        cout<<"price : "<<price<<endl;
    }
    ~laptop(){
        cout<<"destructor used";
    }
};

int main(){
    laptop l("hp", 50000);
    l.details();
}