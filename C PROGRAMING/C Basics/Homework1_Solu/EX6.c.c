/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write Source Code to Swap Two Numbers

			  #########Console_output######
			  Enter value of a: 1.20
			  Enter value of b: 2.45

			  After swapping, value of a = 2.45
			  After swapping, value of b = 1.2
 Description : EX6
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a, b, x;
	printf("\nEnter value of a : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("\nEnter value of b : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	x = a;
	a = b;
	b = x;
	printf("\nAfter swaping, value of a =%f\nAfter swaping, value of b =%f\n",a, b);
	return 0;
}
