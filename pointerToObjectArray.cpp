#include<iostream>

using namespace std;

class A {
	private:
	int a;
		
	public:
	A(int x) {
		a = x;
	}
	int getA() {
		return a;
	}


};

int main() {

	A arr[3] = {10,20,30};
	A *pArr = arr;
	
	for(int i = 0;i<3;i++) {

		cout<<pArr[i].getA();
		cout<<endl;

}




}