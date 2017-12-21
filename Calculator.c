#include<stdio.h>
#include<conio.h>

int main()
{
	int n; num1, num2, result;   //integer type variable (int n) , declaring three variables num1, num2 and result
    char option; // declaring option as a character
	
 do{ //to execute the program more than once, will use the do while loop	
	print f("\nwhat operation do you want to do?\n");
    print f("press 1 for addition\n");	
	print f("press 2 for subtraction\n");
	print f("press 3 for multiplication\n");
	print f("press 4 for division\n");
	scan f ("%d",&n); // To read the number
	
	/*To read the first number*/
	print f ("please enter a number\n"); //Asking the user to enter a chosen number
	scan f ("%d",&num1); 

    /*To read the second number*/
	print f ("please enter a second number\n"); 
	scan f ("%d",&num2);   //to store the second number to the variable num2
	
	/*If mulltiple options available and need to choose one, use switch statement*/
	switch(n) // when asking the user which operation they want to do, the user will enter thier choice, the program will read it with the scan f function and store the value in (n).
	{
		
		//Addition operation
		case 1:result = num1 + num2;
		       printf("addition of two numbers is %d", result); 
			   break;
		
		//Subtraction operation
        case 2:result = num1 - num2;
		       printf("subtraction of two numbers is %d", result); 
			   break;		
			   
        //Multiplication operation
         case 3:result = num1 * num2;
		       printf("multiplication of two numbers is %d", result); 
			   break;
			   
		//Division operation
         case 4:result = num1 / num2;
		       printf("division of two numbers is %d", result); 
			   break;
			   
	    default: printf("wrong input");
			   
		
	}
 }
 
   print f("\n do you want to continue y/n?\n")     //asking the user to continue after an operation 
   option=getche(); //to read the character the user entered
             //getche()function performs three tasks simultaneouly (reads the character, displays it, then returns the character)
  
  while (option =='y');
  
	getch();
	return 0;
}

