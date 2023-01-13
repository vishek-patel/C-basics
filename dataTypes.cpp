// Data types in C++

// studentName , isStudent , firstNumber, curTemp --> This representation is called as CAMEL-CASE

// student_name , is_student , first_number , cur_temp --> This representation is called as SNAKE-CASE

// StudentName , IsStudent , FirstNumber , CurTemp --> This representation is called as PASCAL-CASE



#include<iostream> //this line includes all the library function in the iostream 

using namespace std; // This line helps to use the std namespace


int main() {


	int number1; // Declaring a variable(number1) of type "INTEGER" 
	
//	int 1number; // not allowed , a variable name should never start with a number
	
	number1 = 10; //Assigning a value to the number1 varible 
	
	int number2,number3; // Declaring multiple variable in a single line
	
	char ch = 'V'; // Declaring a variable(ch) of type "CHARACTER"
	
	bool isStudent = true; // Declaring a variable(isStudent) of type "BOOLEAN"
	
	float pi = 3.14f; //Declaring a variable(pi) of type "FLOAT"
	
	double curTemp = 7.25; // Declaring a variable(curTemp) of type "DOUBLE"
	
	string name = "Vishek Patel"; // Declaring a variable(name) of type "STRING"
	
		

	return 0; // Returing a value(0) to check if everything till here worked fine and also main() function has a return type of int

}
	