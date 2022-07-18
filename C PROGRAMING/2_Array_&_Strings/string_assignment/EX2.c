/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to find find the length of string (subject og "strlen")
 Description : EX2
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

int main()
{
	char a[50];
	int i;
	printf("ENTER A STRING :\n");
	fflush(stdin);	fflush(stdout);
	gets(a);

	for(i = 0; a[i] != 0; i++);
	printf("\nTHE LENGTH OF %s IS %d\n",a,i);
	return 0;
}