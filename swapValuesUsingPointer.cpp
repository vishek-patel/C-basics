#include<iostream>

using namespace std;



void swapValues(int *a , int*b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	
	
}

int main() {

	std::cout<<"Program to swap values using pointers "<<std::endl;


	int a = 10;
	int b = 20;
	cout<<"The value of a is : "<<a<<endl;
	cout<<"The value of b is : "<<b<<endl;
	swapValues(&a,&b);
	cout<<"The value of a now is : "<<a<<endl;
	cout<<"The value of b now is : "<<b<<endl;

}
	
	