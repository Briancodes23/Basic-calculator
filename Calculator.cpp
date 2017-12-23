#include <iostream>
/*This is the preprocessor*/

int main() {
	double num,den,result; /*Declaration of three floating point numbers numerator, denominator and the result*/
	char op;
	do //multiple calculations
	{
	 cout << end << "Calculator-Enter number:" ;    
	/*cout means console out*/
	
	cin >> num;
	/*cin means console in*/
	
	cout << "Enter the operator +,-,*,/:"
	/*Telling the user to enter an operator*/
	
	cin >> op;
	
	cout << "Enter the second number:";
	
	cin >> den;
	/*console in denominator*/
	
	
	// Using conditional statements to output result based on user input
	if (op== '+') result= num+den;
	if (op== '-') result = num-den;
	if (op== '*') result = num*den;
	if (op== '/') result = num/den;
	
	cout << result;
	
	}
	
	while (op!= 'e');
	return 0; // returns the program to the operating system
}

	
}
