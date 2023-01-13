#include<iostream>

using namespace std;


void changeValue(int *a){

 *a += 10;


}

int main() {
	
	int a = 10;
	int *pA = &a;
	cout<<"The value of pointer to a is : "<<pA<<endl;
	cout<<"Accessing the value of pointer to a : "<<*pA<<endl;
	cout<<"The value of a is : "<<a<<endl;
	changeValue(&a);
	cout<<"The value of a now is : "<<a<<endl;


}