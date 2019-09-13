

using namespace std;
#include <iostream>

class Temperature{
	private:
		double degrees;
		char scale;
		
	public:
		Temperature(){			//Default Constructor
			degrees = 0;
			scale = 'C';
			cout << degrees << scale;
		}
		Temperature(double degrees1){		//Constructor with one double parameter
			degrees = degrees1;
			scale = 'C';
			cout << degrees << scale;
		}
		Temperature(char scale1){			//Constructor with one character parameter
			degrees = 0.0;
			scale = scale1;
			cout << degrees << scale;
		}
		Temperature(double degrees2, char scale2){	//Constructor with one double and one character parameter
			degrees = degrees2;
			scale = scale2;
			cout << degrees << scale;
		}
		
		double GetCelsius(){			//Accessor method to retrieve temperature in Celsius
			degrees = (5 * (degrees - 32)) / 9;
			cout << degrees << scale;
			return degrees;
		}
		double GetFahrenheit(){			//Accessor method to retrieve temperature in Fahrenheit
			degrees = (9 * degrees / 5) + 32;
			cout << degrees << scale;
			return degrees;
		}
		
		void SetDegrees(double x){		//Set method to set the degrees
			degrees = x;
		}
		void SetScale(char y){			//Set method to set the scale
			scale = y;
		}
		void SetBoth(double a, char b){		//Set method to set the degrees and the scale
			degrees = a;
			scale = b;
		}
		
		bool operator ==(Temperature& t){	//Boolean compare method to see if two temperatures are equal to one another
			if(degrees == t.degrees){		//It is operated overloaded
				return true;
			}
			return false;
		}
		bool operator <(Temperature& t){	//Boolean compare method to see if one temperature is less than the other
			if(degrees < t.degrees){		//It is operated overloaded
				return true;
			}
			return false;
		}
		bool operator >(Temperature& t){	//Boolean compare method to see if one temperature is greater than the other
			if(degrees > t.degrees){		//It is operated overloaded
				return true;
			}
			return false;
		}
};



int main(){
	
	double temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10, temp11, temp12, temp13;	//Variables to reset temps on conversions

	cout << "Constructor #1: ";		//Using Constructor 1
	Temperature myobj;
	myobj.SetScale('F');
	cout << endl << "\t\t";
	myobj.GetFahrenheit();
	cout << endl << endl;
	
	cout << "Constructor #2: ";		//Using Constructor 2
	Temperature myobj2(100.0);
	myobj2.SetScale('F');
	cout << endl << "\t\t";
	myobj2.GetFahrenheit();
	cout << endl << endl;
	
	cout << "Constructor #3: ";		//Using Constructor 3
	Temperature myobj3('F');
	myobj3.SetScale('C');
	cout << endl << "\t\t";
	myobj3.GetCelsius();
	cout << endl << endl;
	
	cout << "Constructor #4: ";		//Using Constructor 4
	Temperature myobj4(25, 'C');
	myobj4.SetScale('F');
	cout << endl << "\t\t";
	myobj4.GetFahrenheit();
	cout << endl << endl;
	
	cout << "Constructor #4 Alternative: ";	//Using Constructor 4 with a different method
	myobj4.SetDegrees(30);
	myobj4.SetScale('C');
	temp1 = myobj4.GetCelsius();
	myobj4.SetBoth(temp1, 'F');
	cout << endl << "\t\t\t     ";	
	myobj4.GetFahrenheit();
	cout << endl << endl;

	myobj4.SetScale('C');			//Redefining variables to make the compare statement true
	temp2 = myobj4.GetCelsius();
	cout << "/";
	myobj4.SetBoth(temp2, 'F');
	myobj4.GetFahrenheit();
	cout << "  " << "<" << "  ";
	myobj2.SetScale('C');
	temp3 = myobj2.GetCelsius();
	cout << "/";
	myobj2.SetBoth(temp3, 'F');
	myobj2.GetFahrenheit();
	
	if(myobj4 < myobj2){		//Boolean compare being used here

		cout << endl << "Temperature 1 is less than temperature 2." << endl << endl;
	}
	else{
		cout << endl << "Temeperature 1 is not less than temperature 2." << endl << endl;
	}
	
	myobj4.SetBoth(215, 'C');		//Redefining variables to make the compare statement false
	temp4 = myobj4.GetCelsius();
	cout << "/";
	myobj4.SetBoth(temp4, 'F');
	myobj4.GetFahrenheit();
	cout << "  " << "!<" << "  ";
	myobj2.SetScale('C');
	temp5 = myobj2.GetCelsius();
	cout << "/";
	myobj2.SetBoth(temp5, 'F');
	myobj2.GetFahrenheit();
	
	if(myobj4 < myobj2){		//Boolean compared being used here
		cout << endl << "Temperature 1 is less than temperature 2." << endl << endl;
	}
	else{
		cout << endl << "Temperature 1 is not less than temperature 2 therefore the above statement is false." << endl << endl;
	}

	myobj4.SetBoth(212, 'C');		//Redefining variables to make the compare statement true
	temp6 = myobj4.GetCelsius();
	cout << "/";
	myobj4.SetBoth(temp6, 'F');
	myobj4.GetFahrenheit();
	cout << "  " << "=" << "  ";
	temp7 = myobj2.GetCelsius();
	cout << "/";
	myobj2.SetBoth(temp7, 'F');
	myobj2.GetFahrenheit();
	
	if(myobj4 == myobj2){		//Boolean compared being used here
		cout << endl << "Temperature 1 is equal to temperature 2." << endl << endl;
	}
	else{
		cout << endl << "Temperature 1 is not equal to temperature 2 therefore the above statement is false." << endl << endl;
	}
	
	myobj4.SetBoth(212, 'C');		//Redefining variables to make the compare statement false
	temp8 = myobj4.GetCelsius();
	cout << "/";
	myobj4.SetBoth(temp8, 'F');
	myobj4.GetFahrenheit();
	cout << "  " << "!=" << "  ";
	myobj.SetScale('C');
	temp9 = myobj.GetCelsius();
	cout << "/";
	myobj.SetBoth(temp9, 'F');
	myobj.GetFahrenheit();
	
	if(myobj4 == myobj){		//Boolean compared being used here
		cout << endl << "Temperature 1 is equal to temperature 2." << endl << endl;
	}
	else{
		cout << endl << "Temperature 1 is not equal to temperature 2 therefore the above statement is false." << endl << endl;
	}

	myobj4.SetBoth(300, 'C');			//Redefining variables to make the compare statement true
	temp10 = myobj4.GetCelsius();
	cout << "/";
	myobj4.SetBoth(temp10, 'F');
	myobj4.GetFahrenheit();
	cout << "  " << ">" << "  ";
	myobj2.SetScale('C');
	temp11 = myobj2.GetCelsius();
	cout << "/";
	myobj2.SetBoth(temp11, 'F');
	myobj2.GetFahrenheit();
	
	if(myobj4 > myobj2){		//Boolean compared being used here
		cout << endl << "Temperature 1 is greater than temperature 2." << endl << endl;
	}
	else{
		cout << endl << "Temperature 1 is not greater than temperature 2 therefore the above statement is false." << endl << endl;
	}

	myobj4.SetBoth(200, 'C');			//Redefining variables to make the compare statement false
	temp12 = myobj4.GetCelsius();
	cout << "/";
	myobj4.SetBoth(temp12, 'F');
	myobj4.GetFahrenheit();
	cout << "  " << "!>" << "  ";
	myobj2.SetScale('C');
	temp13 = myobj2.GetCelsius();
	cout << "/";
	myobj2.SetBoth(temp13, 'F');
	myobj2.GetFahrenheit();
	
	if(myobj4 > myobj2){		//Boolean compared being used here
		cout << endl << "Temperature 1 is greater than temperature 2." << endl << endl;
	}
	else{
		cout << endl << "Temperature 1 is not greater than temperature 2 therefore the above statement is false." << endl << endl;
	}	
}
