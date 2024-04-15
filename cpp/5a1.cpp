#include <iostream>
using namespace std;
class brand{
public:
	string name;
	int model;
	friend void disDetails(brand b);
	void getData(string n, int m){
		name = n;
		model = m;
	}
};

void disDetails(brand b){
	cout<<"brand name :"<<b.name<<endl;
	cout<<"model number :"<<b.model<<endl;
}

int main(){
	brand b;
	b.getData("suzuki", 1024);
	disDetails(b);
}		