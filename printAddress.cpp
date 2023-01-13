#include<iostream>
using namespace std;

void printDetails(int &a, int &b, int &c) {

	cout<<"The value of  a is : " << a<<endl;
	cout<<"The address of a is : " << &a<<endl;
	
	cout<<"The value of  b is : " << b<<endl;
	cout<<"The address of b is : " << &b<<endl;

	cout<<"The value of  c is : " << c<<endl;
	cout<<"The address of c is : " << &c<<endl;



}


int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	printDetails(a,b,c);


}