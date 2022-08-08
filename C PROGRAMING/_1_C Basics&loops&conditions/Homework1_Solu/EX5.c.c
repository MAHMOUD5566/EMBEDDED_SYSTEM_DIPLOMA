/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : EX5:

			  Write C Program to Find ASCII Value of a Character

			  #########Console_output######
			  Enter a character: G
			  ASCII value of G = 7100
 Description : EX5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
	char x;
	printf("ENTER A CHARACTER");
	fflush(stdout);	fflush(stdin);
	scanf("%c",&x);
	printf("ASCII VALUE OF %c = %d",x,x);
}
