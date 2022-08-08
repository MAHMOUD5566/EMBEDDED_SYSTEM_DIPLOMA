/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to reverse a sentence using recursion
 Description : EX3_Fuctions
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

void revrse(char b[], int i);
int main()
{
	char a[60];
	int i;
	printf("ENTER A SENTENCE\n");
	fflush(stdin);	fflush(stdout);
	gets(a);
	i = strlen(a);
	revrse(a, i);
	return 0;
}
void revrse(char b[], int i)
{
	putchar(b[--i]);
	if(i>=0)
		revrse(b, i);
}
