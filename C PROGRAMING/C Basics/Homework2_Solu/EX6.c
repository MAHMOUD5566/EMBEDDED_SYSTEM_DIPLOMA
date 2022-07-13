/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to calculate sum of natural numbers
 Description : Homework2_EX6
 ============================================================================
 */

#include <stdio.h>

int main()
{

	int n, i;
	int sum = 0;
	printf("\nENTER AN INTEGER :");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	for(i = n; i>0; i--)
	{
		sum += i;
	}
	printf("\nsum = %d",sum);
	return 0;
}
