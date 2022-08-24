/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Problem     : Write a C program to o demonstrate how to print a string in reverse using a pointer.
 Description : Pointers_EX3
 ============================================================================
 */
#include <stdio.h>



int main()
{
	char x[50];
	char *ptr = x;
	int i = 0;
	printf("ENTER A STRING:\n");
	fflush(stdin);	fflush(stdout);
	gets(x);
	while(x[i] != 0)
	{
		ptr = &x[i];
		++i;
	}
	/*Printing the reverse*/
	printf("THE REVERSE IS:\n");
	for(; i>0; i--,ptr--)
		printf("%c",*ptr);
	return 0;
}
