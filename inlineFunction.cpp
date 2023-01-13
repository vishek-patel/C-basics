#include<iostream>

using namespace std;

inline int maxi(int a , int b) {
		return (a>b)?a:b;
}

int main() {


	int a = 10;
	int b = 20;
	int res = maxi(a,b);
	cout<<"The larger of the two is : "<<res<<endl;

}
	
	
	
	