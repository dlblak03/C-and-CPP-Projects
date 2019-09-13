

using namespace std;
#include <iostream>


int reverse(int x){
	if(x == 0)
		return 0;
	else{
		cout << x % 10;
		reverse(x / 10);
	}
}
int main(){
	int usrnum;
	
	cout << "Enter the number you want to be reversed: ";
	cin >> usrnum;
	
	cout << "Your number reversed is: ";
	
	reverse(usrnum);
	
	return 0;
}

