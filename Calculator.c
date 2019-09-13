/*
Written by: Dalton Blake 
Lab #3
Lab Section 02 (Thursday Section)
January 22, 2019
In this program I made a calculator that has 6 different functions
*/

#include <stdio.h>

int main()
{
	int response, number1, number2, prime, primetwo, answer, answertwo;
	
	while (response != 7){
		printf("Calculator Menu:");
		printf("\n1. Addition");
		printf("\n2. Subtraction");
		printf("\n3. Multiplication");
		printf("\n4. Division");
		printf("\n5. Modulus (intergers only)");
		printf("\n6. Test if prime (intergers only)");
		printf("\n7. Quit");
		printf("\n\nPlease choose one of the options above: ");
		scanf("%d", &response);
		
		if (response != 7){
			printf("Enter the first number: "); 
			scanf("%d", &number1); //first user entered number
			printf("Enter the second number: "); 
			scanf("%d", &number2); //second user entered number
		
			if (response == 1){
				while (response == 1){
					printf("%d + %d = %d\n\n", number1, number2, number1 + number2);
					break;
				}
			}
			
			// End of addition
			
			if (response == 2){
				while (response == 2){
					printf("%d - %d = %d\n\n", number1, number2, number1 - number2);
					break;
				}
			}
			
			// End of subtraction
			
			if (response == 3){
				while (response == 3){
					printf("%d x %d = %d\n\n", number1, number2, number1 * number2);
					break;
				}
			}
			
			//End of multiplication
			
			if (response == 4){
				while (response ==4){
					printf("%d / %d = %d\n\n", number1, number2, number1 / number2);
					break;
				}
			}
			
			// End of division
			
			if (response == 5){
				while (response == 5){
					printf("The remainder of %d / %d is %d\n\n", number1, number2, number1 % number2);
					break;
				}
			}
			
			// End of modulus
			
			if (response == 6){
				if (number1 == 1)
					printf("%d is not a prime number\n", number1);
				if (number1 > 1){
					answer = 1;
					for (prime = 2; prime <= number1 / 2; prime++){
						if ((number1 % prime) == 0){
							answer = 0;
							break;
						}
					}
					if (answer == 1)
						printf("%d is a prime number\n", number1);
					else
						printf("%d is not a prime number, %d x %d = %d\n", number1, number1 / prime, prime, (number1 / prime) * prime);
				}
				
				if (number2 == 1)
					printf("%d is not a prime number\n\n", number2);
				if (number2 > 1){
					answertwo = 1;
					for (primetwo = 2; primetwo <= number2 / 2; primetwo++){
						if ((number2 % primetwo) == 0){
							answertwo = 0; 
							break;
						}
					}
					if (answertwo == 1)
						printf("%d is a prime number\n\n", number2);
					else 
						printf("%d is not a prime number, %d x %d = %d\n\n", number2, number2 / primetwo, primetwo, (number2 / primetwo) * primetwo);
				}
			}
			
				// End of prime test
		}
		else 
			printf("Good Bye!");
	}
	
	return 0;
	
} //End of program
