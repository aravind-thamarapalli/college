#include <iostream>
using namespace std;
class drink{
public:
	int price;
	string brand;
	void getData(string b, int p){
		price = p;
		brand = b;
	}
friend class detail;	
};
class detail{
public:
	void printer(drink d){
		cout<<"company name :"<<d.brand<<endl;
		cout<<"price of drink :"<<d.price<<endl;
	}
};

int main(){
	drink d;
	d.getData("coca-cola", 99);
	detail de;
	de.printer(d);
}