#include <iostream>
#include <stack>


using namespace std;

int postfixevaluation( string pf, int pflength ){
	stack<int> stack1;
	int first, second, result;
	
	for(int i = 0; i < pflength; i++){
		if(pf[i] == '*'){
			first = stack1.top();
			stack1.pop();
			second = stack1.top();
			stack1.pop();
			result = first * second;
			
			stack1.push(result);
		}
		else if(pf[i] == '/'){
			first = stack1.top();
			stack1.pop();
			second = stack1.top();
			stack1.pop();
			result = second / first;
			
			stack1.push(result);
		}
		else if(pf[i] == '+'){
			first = stack1.top();
			stack1.pop();
			second = stack1.top();
			stack1.pop();
			result = first + second;
			
			stack1.push(result);

		}
		else if(pf[i] == '-'){
			first = stack1.top();
			stack1.pop();
			second = stack1.top();
			stack1.pop();
			result = second - first;
			
			stack1.push(result);
		}
		else{
			result = pf[i] - 48;
			stack1.push(result);
		}
	}
	
	cout << "The postfix evaluation is: ";
	cout << stack1.top();
}

int main(){
	string ui;
	
	cout << "Enter the postfix expression to be evaluated: ";
	cin >> ui;
	
	int uil = ui.length();
	
	postfixevaluation( ui, uil);
	
	return 0;
}
