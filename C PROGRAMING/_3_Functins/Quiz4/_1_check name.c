/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program takes a string from the user and check if it
  	  	  	   is the same user name or not
 Description : _1_quiz4
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];
	char name[100];
	printf("ENTER A STRING :");
	fflush(stdin);	fflush(stdout);
	gets(arr);
	printf("\nENTER YOUR NAME :");
	fflush(stdin);	fflush(stdout);
	gets(name);
	if(stricmp(arr,name) == 0)
		printf("\nIDENTICAL :");
	else
		printf("NOT SAME NAME:");
	return 0;
}

