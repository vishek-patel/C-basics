#include<iostream>

using namespace std;

class Shared {
	
	private:
		static int a;
		int b = 20;

	public :
		void setValue(int x, int y) {
		a = x;
		b = y;
		}
		
		void show();



};

int Shared::a;

void Shared::show() {

	cout<<"This is a static a : "<<a<<endl;
	cout<<"This is a non-static b : "<<b<<endl;
}


int main() {

	Shared s1,s2;
	s1.setValue(40,40);
	s1.show();


	s2.setValue(80,80);
	s2.show();

	s1.show();




}