/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Problem     : Write a C program to o demonstrate how to handle the pointers in the program.
 Description : Pointers_EX2
 ============================================================================
 */
#include <stdio.h>



int main()
{
	char x[27];
	char *p = x;
	int i;
	for(i=0; i<26; i++,++p)
		*p = 'A' + i;
	p =x;
	for(i=0; i<26; i++,p++)
		printf("%c   ",*p);
	return 0;
}
