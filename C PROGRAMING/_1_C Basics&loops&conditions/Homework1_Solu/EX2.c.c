/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   :Write C Program to Print a Integer Entered by a User
			  i should see the Console as following:
			  ##########Console-output###
			  Enter a integer: 25
			  You entered: 25
 Description : EX2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main() 
{
	int x ;
	printf("ENTER AN INTEGER: ");
	fflush(stdout);	fflush(stdin);
	scanf("%d",&x);
	printf("YOU ENTERD: %d",x);
}