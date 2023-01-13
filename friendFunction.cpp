#include<iostream>

using namespace std;

class A {

	string name;
	
	public :
	A():name(""){}

	friend string getName(A a);

};

string getName(A a) {

	a.name = "Vishek Patel";
	
	return a.name;

}

int main() {

	A a1;
	cout<<"The value of name is : "<<getName(a1)<<endl;

}