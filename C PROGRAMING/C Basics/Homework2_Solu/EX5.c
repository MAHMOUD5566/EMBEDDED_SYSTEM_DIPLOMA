/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to check whether a character is an alphabet
 	 	 	   or not
 Description : Homework2_EX5
 ============================================================================
 */

#include <stdio.h>

int main()
{
	while(1)
	{
		char x;
		printf("\nENTER a character :");
		fflush(stdin);	fflush(stdout);
		scanf("%c",&x);
		if(x >=65 & x <=90 || x >=97 & x <=122)
			printf("\n%c is an alphabet",x);
		else
			printf("\n%c is not alphabet",x);
	}
	return 0;
}
