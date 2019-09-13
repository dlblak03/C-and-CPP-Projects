/*
Written by: Dalton Blake 
Lab #4
Lab Section 02 (Thursday Section)
January 29, 2019
In this program, I made a calculator program using different functions
*/

#include <stdio.h>
#include <math.h>

int add(int, int);				
int subtract(int, int);
int multiply(int, int);
int divide(int, int);					//These are the function prototypes.
int modulus(int, int);
int prime(int, int);
int factorial(int, int);
int power(int, int);
int fibonacci();

int main()
{
	int response, num1, num2, times, x;
	response = 20;
	
	while (response != 0){
		printf("Calculator Menu:");
		printf("\n1) Addition");
		printf("\n2) Subtraction");
		printf("\n3) Multiplication");
		printf("\n4) Division");
		printf("\n5) Modulus (intergers only)");					//The calculator menu.
		printf("\n6) Test if prime (intergers only)");
		printf("\n7) Factorial");
		printf("\n8) Power");
		printf("\n9) Fibonacci Sequence");
		printf("\n0) Quit");
		printf("\n\nPlease choose one of the options above: ");
		scanf("%d", &response);
		
		switch(response){
			case 1:
				printf("Enter the first number: ");		
				scanf("%d", &num1);
				printf("Enter the second number: ");
				scanf("%d", &num2);
				printf("%d + %d = %d\n\n", num1, num2, add(num1, num2));
				break;
			case 2:
				printf("Enter the first number: ");		
				scanf("%d", &num1);
				printf("Enter the second number: ");
				scanf("%d", &num2);
				printf("%d - %d = %d\n\n", num1, num2, subtract(num1, num2));
				break;
			case 3:
				printf("Enter the first number: ");		
				scanf("%d", &num1);
				printf("Enter the second number: ");
				scanf("%d", &num2);
				printf("%d x %d = %d\n\n", num1, num2, multiply(num1, num2));
				break;
			case 4: 
				printf("Enter the first number: ");		
				scanf("%d", &num1);
				printf("Enter the second number: ");
				scanf("%d", &num2);
				printf("%d / %d = %d\n\n", num1, num2, divide(num1, num2));
				break;
			case 5:
				printf("Enter the first number: ");		
				scanf("%d", &num1);
				printf("Enter the second number: ");
				scanf("%d", &num2);
				printf("The remainder of %d / %d is %d\n\n", num1, num2, modulus(num1, num2));
				break;
			case 6:
				printf("Enter the first number: ");		
				scanf("%d", &num1);
				printf("Enter the second number: ");
				scanf("%d", &num2);
				prime(num1, num2);
				break;
			case 7:
				printf("Enter the first number: ");		
				scanf("%d", &num1);
				printf("Enter the second number: ");
				scanf("%d", &num2);
				factorial(num1, num2);
				break;
			case 8:
				printf("Enter the first number: ");		
				scanf("%d", &num1);
				printf("Enter the second number: ");
				scanf("%d", &num2);
				printf("%d to the %d power = %d\n\n", num1, num2, power(num1, num2));
				break;
			case 9:
				fibonacci(num1);
				printf("\n\n");
				break;
			case 0:
				printf("Good bye!");
				break;
		}
	}
}

int add(int x, int y){			//Function that adds two numbers
	return x + y;
}

int subtract(int x, int y){		//Function that subtracts two numbers
	return x - y;
}

int multiply(int x, int y){		//Function that multiplies two numbers
	return x * y;
}

int divide(int x, int y){		//Function that divides two numbers
	return x / y;
}

int modulus(int x, int y){		//Function that gets the remainder of two numbers
	return x % y;
}

int prime(int x, int y){		//Function to test if a number is prime
	int answer, answertwo, prime, primetwo;
	
	if (x == 1)
		printf("%d is not a prime number\n", x);
	if (x > 1){
		answer = 1;
		for (prime = 2; prime <= x / 2; prime++){
			if ((x % prime) == 0){
					answer = 0;
					break;
			}
		}
	if (answer == 1)
		printf("%d is a prime number\n", x);
	else
		printf("%d is not a prime number, %d x %d = %d\n", x, x / prime, prime, (x / prime) * prime);
	}
				
	if (y == 1)
		printf("%d is not a prime number\n\n", y);
	if (y > 1){
			answertwo = 1;
			for (primetwo = 2; primetwo <= y / 2; primetwo++){
				if ((y % primetwo) == 0){
					answertwo = 0; 
					break;
				}
			}
	if (answertwo == 1)
		printf("%d is a prime number\n\n", y);
	else 
		printf("%d is not a prime number, %d x %d = %d\n\n", y, y / primetwo, primetwo, (y / primetwo) * primetwo);
	}
}

int factorial(int x, int y){			//Function to find the factorial of a number
	int result = 1;
	int j;
	for (j = 1; j <= x; j++){
		result = result * j; //Multiplies itself by the previous result
	}
	printf("Factorial of %d = %d\n", x, result);
	
	int result2 = 1;
	int b;
	for (b = 1; b <= y; b++){
		result2 = result2 * b;
	}
	printf("Factorial of %d = %d\n\n", y, result2);
}

int power(int x, int y){			//Function that finds the power of x to the y by using the math.h library
	return pow(x, y);
}

int fibonacci(){
	int x, i;
	printf("Enter the amount of numbers you want in the sequence: ");
	scanf("%d", &x);
	int fib[x];
	fib[0] = 0;		//we assing fib[0] and fib[1] that way whenever we print, it prints the values assigned to that array
	fib[1] = 1;
	
	for (i = 2; i < x; i++)
		fib[i] = fib[i - 1] + fib[i - 2]; //Takes the previous value in the array and adds the value that was prior too it
	for (i = 0; i < x; i++)
		printf("%d) %d\n", i, fib[i]);
}
