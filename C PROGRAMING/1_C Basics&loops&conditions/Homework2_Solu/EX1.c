/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   :Write a C program to check whether a number is even or odd
 Description : Homework2_EX1
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int a;
	while(1)
	{
	printf("\nEnter an Integer you want to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	if(a % 2 == 0)
		printf("\n%dis even",a);
	else
		printf("\n%d is odd",a);
	}
	return 0;
}
