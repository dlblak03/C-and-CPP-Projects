/*Summations Calculator

This summations calculator will work for *, /, %, +, -, and ^(power). The program asks for a lower bound, an upper bound, and an expression.

For example, 2, 4, *2 were entered as inputs the following would run:
(2*2 + 3*2 + 4*2)
and the output would be:
18
*/




#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

//Determines what operation to do
int oprtr(string ex){
	if(ex[0] == '*')
		return 0;
	else if(ex[0] == '/')
		return 1;
	else if(ex[0] == '%')
		return 2;
	else if(ex[0] == '+')
		return 3;
	else if(ex[0] == '-')
		return 4;
	else
		return 5;
}

//Since the first character of the string will be the operation, the remaining characters will have to be numbers
//I create a temp string and add the numbers to it and then convert that string to an integer that way the expression can run
int stringtoint(string ex){
	string temp;
	int exlength = ex.length();
	for(int i = 1; i <= exlength; i++){
	temp += ex[i];
	}

	stringstream numbers(temp);

	int final = 0;

	numbers >> final;

	return final;
}

void summation(int lower, int upper, string expression ){
	//Lower bound
	int l = lower;
	//Upper bound
	int u = upper;
	//Expression to be done, an example would be: -2 or *3
	string e = expression;
	//Gets the intger value of the string
	int exp = stringtoint(e);
	//Initializes result to zero so we can add to it
	int result = 0;

	//Determines which operation to run
	int op = oprtr(e);

switch(op){
	//Multiplication
	case 0:
		for(l; l <= u; l++){
			result += (l*exp);
		}
		break;
	//Division
	case 1:
		for(l; l <= u; l++){
		result += (l/exp);
		}
		break;
	//Modulus
	case 2:
		for(l; l <= u; l++){
		result += (l%exp);
		}
		break;
	//Plus
	case 3:
		for(l; l <= u; l++){
		result += (l+exp);
		}
		break;
	//Minus
	case 4:
		for(l; l <= u; l++){
		result += (l-exp);
		}
		break;
	//Power
	default:
		for(l; l <= u; l++){
		result += pow(l, exp);
		}
		break;
		}
			
	cout << "The result of the summation is: " << result;
}

int main() {

	cout << "Enter the lower bound: ";
	int ui1;
	cin >> ui1;
	
	cout << "Enter the upper bound: ";
	int ui2;
	cin >> ui2;
	
	cout << "Enter the epression: ";
	string ui3; 
	cin >> ui3;

	summation(ui1, ui2, ui3);

	return 0;
}
