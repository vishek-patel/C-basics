#include<iostream>
using namespace std;


void swapValues(int &a, int &b){

	
	a = a*b;
	b = a/b; //200/20 = 10
	a = a/b; //200/10 = 20 
	//a = a + b;  
	//b = a - b; // 30  - 20  = 10   == 
	//a = a - b; // 30 - 10 = 20

}


int main () 
{

int a = 10;
int b = 20;

cout<<"The value of a is : " <<a <<endl;
cout<<"The value of b is : " <<b<<endl;
swapValues(a,b);

cout<<"After the swapping operation : modified the code little bit: "<<endl;
cout<<"The value of a is : " <<a <<endl;
cout<<"The value of b is : " <<b<<endl;





}