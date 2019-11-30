#include <iostream>
using namespace std;

int multiples(){
	int sumofmultiples = 0;
	
	for(int i = 0; i < 1000; i++){
		if((i % 3 == 0) || (i % 5 == 0)){
			sumofmultiples += i;
		}
	}
	
	return sumofmultiples;
}

int main(){
	cout << multiples();
}
