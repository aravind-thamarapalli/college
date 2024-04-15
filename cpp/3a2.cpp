#include<iostream>
using namespace std;
class example{
    public:
    example(){
        cout<<"constructor used"<<endl;
    }
    ~example(){
        cout<<"destructor used"<<endl;
    }
    void details(){
        cout<<"hello world"<<endl;
    }
};

int main(){
    example e;
    e.~example();
    e.details();
}