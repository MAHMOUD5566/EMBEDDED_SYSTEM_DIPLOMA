/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Problem     : Write a C program to store information (name,rol, and marks) of a student using structure
 Description : Structure_Ex1
 ============================================================================
 */
#include <stdio.h>

struct Sdata
{
	char name[20];
	int roll;
	float marks;
};
int main()
{
	struct Sdata x;
	printf("ENTER STUDENT INFORMATION:\n");
		/*Getting name*/
	printf("ENTER NAME:");
	fflush(stdin);	fflush(stdout);
	gets(x.name);
	/*Getting roll number*/
	printf("ENTER ROLL NUMBER:");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&x.roll);
		/*Getting marks*/
	printf("ENTER MARKS:");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&x.marks);
		/*Displaying the information*/
	printf("\nDISPLAYING INFORMATION");
	printf("\nNAME: %s\nROLL: %d\nMARK: %.3f",x.name,x.roll,x.marks);
	return 0;
}


