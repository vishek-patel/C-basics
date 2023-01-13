#include<iostream>
#include<bits/stdc++.h>


using namespace std;


class Employee {

	char name[25];

	public :
	void putName(char* n);
	void fetchName(char *n);
	char* getName();


	private:
	double wage;
	
	public:
	void putWage(double n);
	double getWage();


};


void Employee::putName(char* n){

	strcpy(name,n);
}

void Employee::fetchName(char*n) {

	strcpy(n,name);

}

char* Employee::getName() {
	return name;
}

void Employee::putWage(double n) {

	wage = n;

}

double Employee::getWage() {

	return wage;
}

int main() {

	Employee e1;
	char name[25] = "vishek";
	char temp[25];
	e1.putName(name);
	e1.fetchName(temp);
	e1.putWage(34444.5);
	
	//char temp[25] = e1.getName();
	cout<<"The value of name is : "<<temp<<endl;
	cout<<"The value of wage is : "<<e1.getWage()<<endl;

}


	