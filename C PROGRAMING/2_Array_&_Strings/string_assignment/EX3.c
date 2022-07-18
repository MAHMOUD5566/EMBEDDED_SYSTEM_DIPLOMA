/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to find reverse a string (without libraries)
 Description : EX3
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

int main()
{
	char a[50];
	char rev[50];
	char temp;
	int i,n;
	printf("ENTER A STRING :\n");
	fflush(stdin);	fflush(stdout);
	gets(a);
	n = strlen(a) - 1;
	rev[n+1] = 0;	/*Adding Null Termination*/
	for(i = 0; i <= n; i++,n--)
	{
		temp = a[i];
		rev[i] = a[n];
		rev[n] = temp;
	}
	printf("\nTHE REVERSE IS : %s",rev);
	return 0;
}