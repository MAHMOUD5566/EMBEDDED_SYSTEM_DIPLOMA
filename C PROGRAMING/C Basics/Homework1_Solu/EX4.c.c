/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write C Program to Multiply two Floating Point Numbers
			  i should see the Console as following:
			  ##########Console-output###

			  Enter two numbers: 2.4
			  1.1
			  Product: 2.640000
 Description : EX4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	float n1,n2 ;
	printf("ENTER TWO NUMBERS: ");
	fflush(stdout);	fflush(stdin);
	scanf("%f%f",&n1,&n2);
	fflush(stdout);	fflush(stdin);
	printf("PRODUCT: %f",n1*n2);
}