#include <iostream>

using namespace std;


void changeFirst(int a) {

	a+=10;

}

void changeSecond(int a) {
	a+=10;

}

int main() {


	static int a = 20;
	cout<<"The value of a is : " <<a<<endl;
	
	changeFirst(a);
	
	changeSecond(a);
	cout<<"The value of a afterwards is : "<<a<<endl;


}