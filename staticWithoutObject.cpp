#include<iostream>

using namespace std;


class Shared{



	static int a;
	
	public:

	Shared(int x);
	

};

Shared::Shared(int x){
	
	a = x;
	cout<<"The value of static a is : "<<a<<endl;
}

int Shared::a;


int main() {

	Shared s1(100);
	

	//Shared::a=90;
	//cout<<"The value of a is : "<<Shared::a<<endl;

}