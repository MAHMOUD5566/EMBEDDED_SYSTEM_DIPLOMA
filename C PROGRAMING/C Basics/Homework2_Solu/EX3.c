/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to find the largest number among 3 numbers
 Description : Homework2_EX3
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float n1, n2, n3;
	printf("\nENTER THREE NUMbERS :");
	fflush(stdin);	fflush(stdout);
	scanf("%f%f%f",&n1,&n2,&n3);
	if(n1 > n2 && n1 > n2)
		printf("\nLARGEST NUMBER = %f",n1);
	else if(n2 > n3)
		printf("\nLARGEST NUMBER = %f",n2);
	else
		printf("\nLARGEST NUMBER = %f",n3);
	return 0;
}
