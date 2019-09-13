/*
Written by: Dalton Blake 
Lab #8
Lab Section 02 (Thursday Section)
March 13, 2019
In this program, I made a phonebook that has 10 different functions to add a contact, delete a contact,
display all contacts, delete all, search by name, random friend, sort functions, store in a file and read
from a file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct phonebook{
	char firstname[20];			//Structure for phonebook, changed the name to book with typedef
	char lastname[20];
	char phonenumber[20];
} book;

//Function Prototypes
void addcontact(book * );
void deletecontact(book * );
void printbook(book * );
void delete_all(book *);
void searchbyname(book *);
void randomfriend(book *);
void sortnameslast(book *);
void sortnamesfirst(book *);
void storeinfile(book *);
void readfile();

//The amount of entries and the array number so the compiler knows what array value to print
int entries = 0;
int array = 0;

main(){
	int choice = 0;		//Choice for the menu options 
	book *contacts;   	//Book points to contacts
	contacts = (book *) malloc(sizeof(book)*10);   //Allocates the needed amount of memory for the phonebook

	while (choice != 11){
		printf("Phone Book Application\n");
		printf("\t1. Add Contact\n");
		printf("\t2. Delete Contact\n");
		printf("\t3. Display Phonebook\n");
		printf("\t4. Delete all Contacts\n");
		printf("\t5. Search by Name\n");
		printf("\t6. Random Friend to Call\n");
		printf("\t7. Sort Names by Last Name\n");
		printf("\t8. Sort Names by First Name\n");
		printf("\t9. Store in File\n");
		printf("\t10. Read from File\n");
		printf("\t11. Exit Application");
		
		printf("\n\nWhat option would you like to do: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				addcontact(contacts);				//Function call
				printf("Record added to phonebook.\n\n");
				break;
			case 2:
				deletecontact(contacts);			//Function call
				printf("Contact has been deleted.\n\n");
				break;
			case 3:
				printbook(contacts);				//Function call
				printf("\n");
				break;
			case 4:
				delete_all(contacts);
				printf("All contacts have been deleted.");
				printf("\n\n");
				break;
			case 5:
				searchbyname(contacts);
				break;
			case 6:
				randomfriend(contacts);
				break;
			case 7:
				sortnameslast(contacts);
				break;
			case 8:
				sortnamesfirst(contacts);
				break;
			case 9:
				storeinfile(contacts);
				break;
			case 10:
				readfile();
				break;
			case 11:
				printf("Have a nice day!");
				free(contacts);				//Frees all the memory
		}
	}
	return 0;
}

void addcontact(book * contacts){
	entries++;
	contacts = realloc(contacts, sizeof(book) *entries);   //Takes the prior memory and points it to new memory with a new size

	printf("First Name: ");
	scanf("%s", contacts[entries-1].firstname);		//The array is entries-1 because since arrays start at 0, I needed to subtract one
	
	printf("Last Name: ");
	scanf("%s", contacts[entries-1].lastname);		//Assigns each variable to that specific structure of the array
	
	printf("Phone Number: ");
	scanf("%s", contacts[entries-1].phonenumber);
	
	system("cls");
}

void deletecontact(book * contacts){
	char fn[20];
	char ln[20];
	printf("First Name: ");
	scanf("%s", fn);		//Name assigned to fn array
	printf("Last Name: ");
	scanf("%s", ln);		//Name assigned to ln array
	
	for(array = 0; array < entries; ++array){
		if(strcmp (fn, contacts[array].firstname) == 0 && strcmp(ln, contacts[array].lastname) == 0){		/*Compares the array of fn and contacts
						Also compares ln and contacts. If the value equals 0 then it means they are the same*/
			int x;
			
			for(x = array; x < entries-1; ++x){
				strcpy(contacts[x].firstname, contacts[x+1].firstname);		//This copies the value above the last filled array
				strcpy(contacts[x].lastname, contacts[x+1].lastname);		//So what that does is replaces the names with
                strcpy(contacts[x].phonenumber, contacts[x+1].phonenumber);	//A totally blank array, in result deleting the contact
			}
		system("cls");
		--entries;
		}
	}
	
}

void printbook(book * contacts){
	char choice;
	system("cls");
	printf("Phone Book Entries:\n");
	
	for(array = 0; array < entries; array++){       
		printf("%s %s: ", contacts[array].firstname, contacts[array].lastname);		//Array variable prints the array from start to finish
		printf("%s\n", contacts[array].phonenumber);
	}
}

void delete_all(book * contacts){
	char del[30] = {'\0'};
	
	for(array = 0; array < entries; array++){
		strcpy(contacts[array].firstname, del);			//Replaces the array with an "empty character" so no character at all
		strcpy(contacts[array].lastname, del);
		strcpy(contacts[array].phonenumber, del);
	}
	
	entries = 0;									//Makes the entries 0 so whenever you print the phonebook it does not show a empty line
	system("cls");
}

void searchbyname(book * contacts){
	char fn[20];
	char ln[20];
	printf("First Name: ");
	scanf("%s", fn);
	printf("Last Name: ");
	scanf("%s", ln);
	
	for(array = 0; array < entries; ++array){
		if(strcmp(fn, contacts[array].firstname) == 0 && strcmp(ln, contacts[array].lastname) == 0){		//Compares user entered name with the names in the arrays to print the number
			system("cls");
			printf("%s %s: ", contacts[array].firstname, contacts[array].lastname);
			printf("%s\n\n", contacts[array].phonenumber);	
		}
	}
}

void randomfriend(book * contacts){
	srand(time(NULL));						//Random number by using the time
	int random = rand() % entries;			//Generates random number with the number of entries we have that we it prints a name and number
	
	system("cls");
	printf("%s %s: ", contacts[random].firstname, contacts[random].lastname);
	printf("%s\n\n", contacts[random].phonenumber);
}

void sortnameslast(book * contacts){
	char copyfn[30], copyln[30], copynum[30];				//Temporary arrays
	system("cls");
	
	for(array = 0; array < entries - 1; array++){
		if(strcmp(contacts[array].lastname, contacts[array+1].lastname) > 0){
			strcpy(copyfn, contacts[array].firstname);									//Copies the array to a temporary array
			strcpy(copyln, contacts[array].lastname);
			strcpy(copynum, contacts[array].phonenumber);
				
			strcpy(contacts[array].firstname, contacts[array+1].firstname);
			strcpy(contacts[array].lastname, contacts[array+1].lastname);				//If the name is supposed to be at the top, it replaces that array with the one before
			strcpy(contacts[array].phonenumber, contacts[array+1].phonenumber);
					
			strcpy(contacts[array+1].firstname, copyfn);								//Copies the temp array to the actual array, they switched places basically
			strcpy(contacts[array+1].lastname, copyln);
			strcpy(contacts[array+1].phonenumber, copynum);
			
			array = -1;		//Resets to make the for loop repeat again that way it can change the right arrays til it gets in the right position
		}
	}
	
	printf("Names have been sorted, enter 3 to view phonebook.\n\n");
}

void sortnamesfirst(book * contacts){
	char copyfn[30], copyln[30], copynum[30];
	system("cls");
	
	for(array = 0; array < entries - 1; array++){
		if(strcmp(contacts[array].firstname, contacts[array+1].firstname) > 0){
			strcpy(copyfn, contacts[array].firstname);
			strcpy(copyln, contacts[array].lastname);
			strcpy(copynum, contacts[array].phonenumber);
				
			strcpy(contacts[array].firstname, contacts[array+1].firstname);
			strcpy(contacts[array].lastname, contacts[array+1].lastname);
			strcpy(contacts[array].phonenumber, contacts[array+1].phonenumber);
					
			strcpy(contacts[array+1].firstname, copyfn);
			strcpy(contacts[array+1].lastname, copyln);
			strcpy(contacts[array+1].phonenumber, copynum);
			
			array = -1;
		}
	}
	
	
	
	printf("Names have been sorted, enter 3 to view phonebook.\n\n");
}

void storeinfile(book * contacts){
	char filename[80];
	printf("What do you want to name the file? ");
	scanf("%s", filename);
	FILE *pOpen;
	sprintf(filename, "%c.txt", filename);
	pOpen = fopen(filename, "w");
	if(pOpen == NULL){
		printf("File was not created.\n");
	}
	for(array = 0; array < entries; array++){
		if(contacts[array].firstname != NULL && contacts[array].lastname != NULL){
			fprintf(pOpen, "%s\t%s\t%s\n", contacts[array].firstname, contacts[array].lastname, contacts[array].phonenumber);
		}
	}
	printf("Contacts have been saved in a file.\n");
	system("pause");
	fclose(pOpen);
	system("cls");
}

void readfile(){
	char filename[80];
	printf("Enter file name to open: ");
	scanf("%s", filename);
	char line[500];
	FILE *pOpen;
	sprintf(filename, "%c.txt", filename);
	pOpen = fopen(filename, "r");
	if(pOpen == NULL){
		printf("File not found.\n");
	}
	while(fgets(line, 300, pOpen) != NULL){
		printf("%s\n", line);
	}
	fclose(pOpen);
	system("pause");
	system("cls");
}
