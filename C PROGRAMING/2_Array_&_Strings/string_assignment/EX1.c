/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to find the frequency of a character in a string
 Description : EX1
 ============================================================================
 */
#include <stdio.h>

int main()
{
	char a[50];
	char x;
	int i, count = 0;
	printf("ENTER A STRING :\n");
	fflush(stdin);	fflush(stdout);
	gets(a);
	printf("ENTER A CHARACTER TO FIND ITS FREQUENCY :\n");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&x);
		/*findinf the frequency*/
	for(i = 0; a[i] != 0; i++)
	{
		if(x == a[i])
			count++;
	}
	printf("\nFREQUENCY OF %c IS %d",x,count);
	return 0;
}