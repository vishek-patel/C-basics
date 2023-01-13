#include<iostream>

using namespace std;

class Student{
	
	private:
	string name;
	int rNo;
	string section;
	
	public :
	void createRecord(string names, int no, string sec);
	void showRecords();


};

void Student::createRecord(string names, int no, string sec) {

	name = names;
	rNo = no;
	section = sec;

}

void Student::showRecords(){

	cout<<"The Student information is :"<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Reg No : "<<rNo<<endl;
	cout<<"Section : "<<section<<endl;

}


int main() {
	Student *s1 = new Student();
	s1->createRecord("Vishek",1200,"K20MH");
	//Student s2;
	//s2.createRecord("Hritik",5678,"K20KR");
	s1->showRecords();
	//s2.showRecords();


}