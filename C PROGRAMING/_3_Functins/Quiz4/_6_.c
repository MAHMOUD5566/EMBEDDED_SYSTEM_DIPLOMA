/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to check if a number is a power of 3
 Description : _6_quiz4
 ============================================================================
 */
#include <stdio.h>
#include <math.h>

int power_check(unsigned x);
int main()
{
	unsigned n;
		/*Entering the number*/
	printf("ENTER A positive NUMBER :");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &n);
	power_check(n) ? printf("\n0 ") : printf("\n1");/* 0 means power of 3, 1 means not power */
	return 0;
}
int power_check(unsigned x)
{
	double i = log(x) / log(3);
	return i == (int)i;	/*Note : 2.000 equal 2, but 2.1 != 2*/
}

