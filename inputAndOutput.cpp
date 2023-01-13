//Input and Output in C++



#include<iostream>

using namespace std;


int main() {


	int number1;

//	string name;

	
	cout << "Enter number 1: "; // Double quotation mark is used to print any string value 
	
	cin >> number1; // cin is used to get the input from the user using the >>(insertion) operator 
				 // The value entered by the used get stored in number1 variable

	cout<<"The value of number is : "; 

	cout << number1; // cout is used to print the output on the terminal or console using the <<(extraction) operator
	
	cout << endl; // endl is used to print a new line 
	
	cout << "\n"; // \n escape sequence can also be used to print new line in the console or terminal
	
	cout << "Enter your name : ";

//	cin >> name; // cin will store only one word by default

	fflush(stdin); //  This method flushes the input buffer , since after enter the number you enterd a new line character (Enter key)  
	
//	getline(cin,name);

	char name[50];

	cin.getline(name, sizeof(name));
	
	cout << "Your name is : ";
	
	cout << name;
	
	
	return 0;
}