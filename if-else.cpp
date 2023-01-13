// If-else program to check if the user is eligible to vote or not

// if ( condition )
// if the condition is true then do something
// else 
// do something else


#include<iostream>

using namespace std;

// > greater Than , eg ( 20 > 18 ) 
// < less than , eg ( 20 < 30 )
// >= greater than equal to , eg ( 18 >= 15)
// <= less than equal to , eg ( 18 <= 20 )
// != not equal to , eg ( 18 != 20 )


int main() {

	int age = 0; // Declaring and assigning the variable(age) with 0
	
	cout << "Enter your age : ";
		
	cin >> age;
	
	if ( age >= 18 ) {   // condition to check if age is greater than or equal to 18
	
		cout << "You're eligible to vote " << endl;
	}

	else {
		
		cout << "You're not eligible to vote " << endl;

	}


	return 0;

}

