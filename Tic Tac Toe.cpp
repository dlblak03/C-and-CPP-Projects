/*
Written by: Dalton Blake 
Lab #9
Lab Section 02 (Thursday Section)
March 19, 2019
In this program, I made a tic tac toe game using the c++ language where a user will play
the computer
*/

using namespace std;
#include <iostream>				//Includes all the necessary libraries needed for this lab
#include <ctime>
#include <cstdlib>

class TicTacToe{
	public: 
		void printboard();					//Sets up the class we will be using
		void getlocation(int location);
		void computerturn(char player);
		int determinegame();
		int winchecker();
};

int main(){
	TicTacToe game;			
	
	char player = '\0';		//Empty array so we can assign a letter to it when we decide who goes first
	int status;				
	int random;				
	int choice;	
	
	srand(time(0));
	random = (rand() % 2) + 1;			//Generates random number between 1 and 2
	
	cout << "Guess a number (1 or 2): ";
	cin >> choice;						//Gets the users guessed number

	if(choice == random){
		player = 'X';
		cout << "You guessed correctly. You go first!" << endl;			//Checks to see if user guessed function matches the random generated
		system("pause");												//number, if it does then they get to go first
	}
	else if(choice != random){
		cout << "You guessed incorrectly. Computer goes first!" << endl;
		player = 'O';
		system("pause");
	}
	
	system("cls");						//Clears the screen to show a neat and simple gameboard
	
	while(game.determinegame() == 2){
		cout << "\t  Tic Tac Toe Game!" << endl << endl << "\tPlayer [X]   Computer [O]  " << endl << endl;
		game.printboard();						//Function call to drawboard()
		
		if(player == 'X'){
			game.getlocation(player);			//Function call to getlocation()
			player = 'O';
			status = game.winchecker();			//Variable that checks to see if there is a winner or not using the winchecker function
			if(status == 1){
				system("cls");
				cout << "\tCongratulations, you have won!" << endl << endl;		//Tells the user they have won then prints the winning
				game.printboard();												//gameboard
				break;
			}
			else if(status == 2){
				system("cls");
				cout << "\tSorry, you lost!" << endl << endl;			//Tells the user they have lost adn prints the losing gameboard
				game.printboard();
				break;
			}
			else if(status == 3){
				system("cls");
				cout << "\tDraw!" << endl << endl;			//Tells the user they have drawn and prints the tied gameboard
				game.printboard();
				break;
			}
		}
		else{
			game.computerturn(player);
			player = 'X';
			status = game.winchecker();			//Variable that checks to see if there is a winner or not using the winchecker function
			if(status == 1){
				system("cls");
				cout << "\tCongratulations, you have won!" << endl << endl;		//This set of code has the same function as the first, the
				game.printboard();												//reason it is put twice is because whenever the computer
				break;															//goes first, this will check to see if there is a winner
			}
			else if(status == 2){
				system("cls");
				cout << "\tSorry, you lost!" << endl << endl;
				game.printboard();
				break;
			}
			else if(status == 3){
				system("cls");
				cout << "\tDraw!" << endl << endl;
				game.printboard();
				break;
			}
		}
	}
}

char tttboard[3][3] = { 
{'1' , '2' , '3'},				//Used a 3 by 3 array to store the board values
{'4' , '5' , '6'},
{'7' , '8' , '9'},
};

void TicTacToe::printboard(){
	for(int row = 0; row < 3; row++){				//For loop to execute the code below it for each row
		for(int column = 0; column < 2; column++){			//This for loop prints the columns of the board array
			cout << "\t" << tttboard[row][column] << "   |  ";
		}
		cout << "\t" << tttboard[row][2];
		cout << endl;
		cout << endl;
	}
}

void TicTacToe::getlocation(int location){
	char player = 'X';
	restart:
	cout << "Where would you like to place your move? ";
	cin >> location;				//Takes the users input where they want to place their mark
	
	switch(location){				//Switch that allows the user to place there input into the right array of the board
		case 1:
			if(tttboard[0][0] == '1')
				tttboard[0][0] = player;
			else{
				cout << "Space filled. Pick another option." << endl;
				goto restart;		//If space is filled, it goes back to the top and restarts the user selection process
			}
			break;
		case 2:
			if(tttboard[0][1] == '2')
				tttboard[0][1] = player;
			else{
				cout << "Space filled. Pick another option." << endl;
				goto restart;		//If space is filled, it goes back to the top and restarts the user selection process
			}
			break;
		case 3:
			if(tttboard[0][2] == '3')
				tttboard[0][2] = player;
			else{
				cout << "Space filled. Pick another option." << endl;
				goto restart;		//If space is filled, it goes back to the top and restarts the user selection process
			}
			break;
		case 4:
			if(tttboard[1][0] == '4')
				tttboard[1][0] = player;
			else{
				cout << "Space filled. Pick another option." << endl;
				goto restart;		//If space is filled, it goes back to the top and restarts the user selection process
			}	
			break;
		case 5:
			if(tttboard[1][1] == '5')
				tttboard[1][1] = player;
			else{
				cout << "Space filled. Pick another option." << endl;
				goto restart;		//If space is filled, it goes back to the top and restarts the user selection process
			}
			break;
		case 6:
			if(tttboard[1][2] == '6')
				tttboard[1][2] = player;
			else{
				cout << "Space filled. Pick another option." << endl;
				goto restart;		//If space is filled, it goes back to the top and restarts the user selection process
			}
			break;
		case 7:
			if(tttboard[2][0] == '7')
				tttboard[2][0] = player;
			else{
				cout << "Space filled. Pick another option." << endl;
				goto restart;		//If space is filled, it goes back to the top and restarts the user selection process
			}
			break;
		case 8:
			if(tttboard[2][1] == '8')
				tttboard[2][1] = player;
			else{
				cout << "Space filled. Pick another option." << endl;
				goto restart;		//If space is filled, it goes back to the top and restarts the user selection process
			}
			break;
		case 9:
			if(tttboard[2][2] == '9')
				tttboard[2][2] = player;
			else{
				cout << "Space filled. Pick another option." << endl;
				goto restart;		//If space is filled, it goes back to the top and restarts the user selection process
			}
			break;
	}
	system("cls");
}

void TicTacToe::computerturn(char player){
	player = 'X';
	
	srand(time(0));
	
	restart:
		int random = rand() % 3;			//Generates random row and column to place its turn in
		int randomtwo = rand() % 3;
		if(player == 'X'){
			if(tttboard[random][randomtwo] == '1'){			//If the column does not have an X in it then the computer will place
				tttboard[random][randomtwo] = 'O';			//its O
			}
			else if(tttboard[random][randomtwo] == '2'){
				tttboard[random][randomtwo] = 'O';
			}
			else if(tttboard[random][randomtwo] == '3'){
				tttboard[random][randomtwo] = 'O';
			}
			else if(tttboard[random][randomtwo] == '4'){
				tttboard[random][randomtwo] = 'O';
			}
			else if(tttboard[random][randomtwo] == '5'){
				tttboard[random][randomtwo] = 'O';
			}
			else if(tttboard[random][randomtwo] == '6'){
				tttboard[random][randomtwo] = 'O';
			}
			else if(tttboard[random][randomtwo] == '7'){
				tttboard[random][randomtwo] = 'O';
			}
			else if(tttboard[random][randomtwo] == '8'){
				tttboard[random][randomtwo] = 'O';
			}
			else if(tttboard[random][randomtwo] == '9'){
				tttboard[random][randomtwo] = 'O';
			}
			else{
				goto restart;
				srand(time(0));		//If the computer cannot place the array because it has a X already then it goes back to 								
			} 						//the top and creates another set of random numbers until there is an emtpy array to fill
		}
		else if(player == 'O')
			player = 'X';
			
		system("cls");
}

int TicTacToe::determinegame(){
	for(int row = 0; row < 3; row++){
		for(int column = 0; column < 3; column++){
			if(tttboard[row][column] == 'X' && tttboard[row][column] == 'O'){		//Determs if the game is still going on or not
				return 1;
			}
			else
				return 2;
		}
	}
}

int TicTacToe::winchecker(){
	if(tttboard[0][0] == tttboard[0][1] && tttboard[0][1] == tttboard[0][2]){		//Checks to see if there is a match straight across
		if(tttboard[0][0] == 'X' && tttboard[0][1] == 'X' && tttboard[0][2] == 'X')	//in the first row
			return 1;
		else
			return 2;
	}
	else if(tttboard[1][0] == tttboard[1][1] && tttboard[1][1] == tttboard[1][2]){	//Checks to see if there is a match straight across
		if(tttboard[1][0] == 'X' && tttboard[1][1] == 'X' && tttboard[1][2] == 'X')	//in the second row
			return 1;
		else
			return 2;
	}
	else if(tttboard[2][0] == tttboard[2][1] && tttboard[2][1] == tttboard[2][2]){	//Checks to see if there is a match straight across
		if(tttboard[2][0] == 'X' && tttboard[2][1] == 'X' && tttboard[2][2] == 'X')	//in the third row
			return 1;
		else
			return 2;
	}
	else if(tttboard[0][0] == tttboard[1][0] && tttboard[1][0] == tttboard[2][0]){	//Checks for a match straight down in first column
		if(tttboard[0][0] == 'X' && tttboard[1][0] == 'X' && tttboard[2][0] == 'X')
			return 1;
		else
			return 2;
	}
	else if(tttboard[0][1] == tttboard[1][1] && tttboard[1][1] == tttboard[2][1]){	//Checks for a match straight down in second column
		if(tttboard[0][1] == 'X' && tttboard[1][1] == 'X' && tttboard[2][1] == 'X')
			return 1;
		else
			return 2;
	}
	else if(tttboard[0][2] == tttboard[1][2] && tttboard[1][2] == tttboard[2][2]){	//Checks for a match straight down in third column
		if(tttboard[0][2] == 'X' && tttboard[1][2] == 'X' && tttboard[2][2] == 'X')
			return 1;
		else
			return 2;
	}
	else if(tttboard[0][0] == tttboard[1][1] && tttboard[1][1] == tttboard[2][2]){	//Checks for diagonal match
		if(tttboard[0][0] == 'X' && tttboard[1][1] == 'X' && tttboard[2][2] == 'X')
			return 1;
		else
			return 2;
	}
	else if(tttboard[0][2] == tttboard[1][1] && tttboard[1][1] == tttboard[2][0]){	//Checks for diagonal match
		if(tttboard[0][2] == 'X' && tttboard[1][1] == 'X' && tttboard[2][0] == 'X')
			return 1;
		else
			return 2;
	}
	else if(tttboard[0][0] != '1' && tttboard[0][1] != '2' && tttboard[0][2] != '3' && tttboard[1][0] != '4' 
		&& tttboard[1][1] != '5' && tttboard[1][2] != '6' && tttboard[2][0] != '7' && tttboard[2][1] != '8' && tttboard[2][2] != '9')
		return 3;	//Checks to see if there is a draw by not having any match three in a row
}

