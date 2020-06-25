/*
Finds the max number of steps of the Euclidean Algorithm where the 
remainder will decrease by 50% or more each step
*/

#include <iostream>

using namespace std;

int main() {
	int m = 2000;
	int n = 1000;
	int finalcounter = 0;
	int finalm = 0;
	int finaln = 0;
	int tempr = 0;
	
	int mprime,nprime;
	while(n < 1500) {
		int counter = 0;
		int remainder = -1;
		mprime = m;
		nprime = n;
		
		while(remainder != 0) {
			
			remainder = mprime % nprime;
			
			if(remainder == 0) {
				remainder = 0;
			} 
			else {
				mprime = nprime;
				nprime = remainder;
				counter++;
		
				tempr = mprime % nprime;
				
				if(tempr > (nprime / 2)) {
					remainder = 0;
					counter = 0;
				}	
			}
			
		}
		
		cout << counter << " ";
		if(finalcounter <= counter) {
			finalcounter = counter;
			finalm = m;
			finaln = n;
		}
		cout << m << " " << n << "\n";
		m++;
		n++;
	}
	
	cout << finalm << " " << finaln;
}
