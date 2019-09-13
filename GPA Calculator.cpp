
using namespace std;
#include <iostream>
#include <string.h>
#include <stdlib.h>

class mygpa{
	private:
		double gpa;
		double gradepoint;
		int totalhours;
	public:
		mygpa(){
			gpa = 0;
			gradepoint = 0;
			totalhours = 0;
		}
		
		double setGPTH(){
			int credithours;
			string grade;
			
			TryAgain:
				
				cout << "Credit Hours: ";
				cin >> credithours;
				
				totalhours += credithours;
				
				cout << "Grade: ";
				cin >> grade;
				
				if("A" == grade){
					gradepoint += (credithours * 4);
				}
				else if("A-" == grade){
					gradepoint += (credithours * 3.7);
				}
				else if("B+" == grade){
					gradepoint += (credithours * 3.33);
				}
				else if("B" == grade){
					gradepoint += (credithours * 3);
				}
				else if("B-" == grade){
					gradepoint += (credithours * 2.7);
				}
				else if("C+" == grade){
					gradepoint += (credithours * 2.3);
				}
				else if("C" == grade){
					gradepoint += (credithours * 2);
				}
				else if("C-" == grade){
					gradepoint += (credithours * 1.7);
				}
				else if("D+" == grade){
					gradepoint += (credithours * 1.3);
				}
				else if("D" == grade){
					gradepoint += (credithours * 1);
				}
				else if("D-" == grade){
					gradepoint += (credithours * 0.7);
				}
				else{
					cout << "Invalid Grade. Please try again." << endl;
					goto TryAgain;
				}
		}
		double getGPA(){
			gpa = gradepoint / totalhours;
			return gpa;
		}
};

int main(){
	int response;
	double Gpa;
	mygpa m;
	
	do{
		Here:
			cout << "\t   University of Louisville" << endl;
			cout << "\tGPA Calculator by Dalton Blake" << endl;
			
			cout << "Calculator Menu:" << endl;
			cout << "1. Add a new class" << endl;
			cout << "2. Get GPA" << endl;
			cout << "3. End Program" << endl << endl;
			
			cout << "Enter the option you would like to do: ";
			cin >> response;
			
			if(response == 1){
				m.setGPTH();
				system("cls");
			}
			else if(response == 2){
				Gpa = m.getGPA();
				cout << "Your gpa is: " << Gpa << endl;
				system("pause");
				system("cls");
			}
			else if(response == 3){
				break;
			}
			else{
				cout << "Invalid Response. Try again." << endl;
				system("pause");
				system("cls");
				goto Here;
			}
	}while(response == 1 || response == 2);
	
	return 0;
}

