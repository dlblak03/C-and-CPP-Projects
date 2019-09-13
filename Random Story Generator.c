/*
Written by: Dalton Blake 
Lab #5
Lab Section 02 (Thursday Section)
February 6, 2019
In this program, I made a program that generates random stories based on user inputted information
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Function Prototypes
void getnameandcolor(char *, char *);		//I used void so the functions would not return anything
void getshowandnumber(char *, char *);
void getlocation(char *);
void getageandnumber(int *, int *);

//Function that gets the information needed to ask their name and favorite color
//Uses a pointer to store the information
void getnameandcolor(char *name, char *color){
	name[50];
	color[20];
	printf("What is your name? ");
	gets(name);
	printf("What is your favorite color? ");
	gets(color);
}

//Function that gets the information needed to ask their favorite show and hometown
//Also uses a pointer
void getshowandhometown(char *show, char *hometown){
	show[50];
	hometown[100];
	printf("What is your favorite show? ");
	gets(show);
	printf("What is your hometown? ");
	gets(hometown);
}

//Function that gets the users favorite state
void getlocation(char *state){
	state[30];
	printf("What is your favorite state? ");
	gets(state);
}

//Function that gets the users age and favorite number
void getageandnumber(int *age, int *number){
	printf("What is your age? ");
	scanf("%d", age);
	printf("What is your favorite number? ");
	scanf("%d", number);
}

int main(){
	srand(time(NULL));		//Generates a different random number each time program is ran
	int random = rand() % 4;		//Generates the random number needed to run the if statements
	char yourname[50];			//Arrays to store the users inputted information
	char yourcolor[20];
	char yourshow[100];
	char yourtown[100];
	char yourstate[30];
	int yourage, yournumber;
	
	getnameandcolor(yourname, yourcolor);			//Function call
	getshowandhometown(yourshow, yourtown);			//Function call
	getlocation(yourstate);							//Function call
	getageandnumber(&yourage, &yournumber);			//Function call

	if (random == 0){
		//Story 1
		printf("\n%s is %d years old. Their favorite number is %d. Their favorite color is %s.\n", yourname, yourage, yournumber, yourcolor);
		printf("%s also drives a %s Ferrari. He/She really loves their Ferrari. But one day he/she got into a wreck.\n", yourname, yourcolor);
		printf("%s was devastated, all he/she wanted to do was drive their Ferrari again. After saving up money for the ", yourname);
		printf("\npast 3 years, he/she was finally able to buy a Ferrari again. He/She bought one the same color as before and %s was ", yourname);
		printf("\nfinally happy to be able to drive the same %s car again.", yourcolor);
	}
	if (random == 1){
		//Story 2
		printf("\n%s is %d years old. Their favorite number is %d. Their favorite color is %s.\n", yourname, yourage, yournumber, yourcolor);
		printf("%s loves to sit in their %s brick colored house and watch their favorite tv show %s.\n", yourname, yourcolor, yourshow);
		printf("%s is from %s and loves to explore the city. %s has made lots of friends by going to parks\n", yourname, yourtown, yourname);
		printf("and just exploring the city. %s would not want to live anywhere else.", yourname);
	}
	if (random == 2){
		//Story 3
		printf("\n%s is %d years old. Their favorite number is %d. Their favorite color is %s.\n", yourname, yourage, yournumber, yourcolor);
		printf("%s watches alot of T.V.. Sometimes %s watches so much T.V., it affects their productivity level.\n", yourname, yourname);
		printf("The show that %s watches all the time is %s. It is their favorite show. But it gets them in trouble.\n", yourname, yourshow);
		printf("To prevent from not being productive, %s has limited themselves to watching T.V. only 5 hours a week.", yourname);
	}
	if (random == 3){
		//Story 4
		printf("\n%s is %d years old. Their favorite number is %d. Their favorite color is %s.\n", yourname, yourage, yournumber, yourcolor);
		printf("%s currently lives in %s, but their favorite state is %s. One day %s will be able to move there.\n", yourname, yourtown, yourstate, yourname);
		printf("They can not wait to move there. %s loves that state. The last time %s went there was whenever they were\n", yourname, yourname);
		printf("there on vacation with their family. %s will soon be able to travel to %s again.", yourname, yourstate);
	}
	
	return 0;
}




