/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to find factorial number
 Description : Homework2_EX7
 ============================================================================
 */

#include <stdio.h>

int main()
{

	int n, i;
	int fac = 1;
	printf("\nENTER AN INTEGER :");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	if(n ==0)
		printf("\nfactorial = 1");
	else if(n < 0)
		printf("\nERROER factorial of negative not exist");
	else
	{
		for(i = n; i>0; i--)
		{
			fac *= i;
		}
		printf("\nfactorial = %d",fac);
	}
	return 0;
}
