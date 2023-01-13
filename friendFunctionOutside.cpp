#include<iostream>

using namespace std;

class Vishek{
	
	int salary;
	
	public:
	
	Vishek(int x):salary(x){}

	friend int getSalary(Vishek v);
};

int getSalary(Vishek v){
	return v.salary;
}



int main() {

	Vishek v1(45000);
	cout<<"The salary of Vishek is : "<<getSalary(v1)<<endl;

}