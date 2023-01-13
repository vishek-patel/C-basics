#include<iostream>

using namespace std;

double findLarger(double a , double b){
	
	return max(a,b);
	//return a>b?a:b;

}


int main() {

	double a = 45.5;
	double b = 85.4;
	double result = findLarger(a,b);
	cout<<"The greater of the two numbers : ("<<a<<"," <<b<<") is : "<<result<<endl;
}