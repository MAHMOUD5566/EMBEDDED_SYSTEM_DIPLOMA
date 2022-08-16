/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to find the value of the 4th least signficant bit
 Description : _5_quiz4
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

int main()
{
	int n, b, i;
		/*Entering thr number*/
	printf("ENTER AN INTEGER NUMBER :");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &n);
		/*Converting the decimal number to binary*/
	printf("\n%d ITS BINARY VALUE IS: ",n);
	for(i =31; i>=0; i--)
	{
		b = n >> i;
		if(b & 1)
			printf("1");
		else
			printf("0");
	}
		/*Getting the 4th least signficant bit*/
	b = n >> 3;
	if(b & 1)
		printf("\nTHE 4th LEAST SIGNFICANT BIT IS 1");
	else
		printf("\nTHE 4th LEAST SIGNFICANT BIT IS 0");
	return 0;
}

