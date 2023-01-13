#include<iostream>
using namespace std;

class Main{
	int x;

	public:
		void setValue(int set);
		int getValue();

};

void Main::setValue(int set) {

	x= set;
}

int Main::getValue() {

	return x;
}


int main() {

	Main m[3];
	for(int i = 0;i<3;i++) {

	m[i].setValue(i+10);
	int temp;
	temp = m[i].getValue();
	cout<<"The value of x is : "<<temp<<endl;

}
}