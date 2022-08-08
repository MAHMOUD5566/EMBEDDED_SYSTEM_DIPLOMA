/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write C Program to Add Two Integers
			  i should see the Console as following:
			  ##########Console-output###
			  Enter two integers: 12
			  11
			  Sum: 23
 Description : EX3
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n1,n2 ;
	printf("ENTER TWO INTEGERS: ");
	fflush(stdout);	fflush(stdin);
	scanf("%d%d",&n1,&n2);
	fflush(stdout);	fflush(stdin);
	printf("SUM: %d",n1+n2);
}
