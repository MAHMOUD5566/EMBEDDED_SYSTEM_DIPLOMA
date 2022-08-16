/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to convert a decimal number stored as an ASCII
 	 	 	   to an unsigned integer.
 Description : _8_quiz4
 ============================================================================
 */
#include <stdio.h>
#include <math.h>

int main()
{
	 char n;
	 printf("ENTER THE ASCII OF THE THE NUMBER IN RNGE(0 : 9) :");
	 fflush(stdin);	fflush(stdout);
	 scanf("%c",&n);
	 switch(n)
	 {
	 case '0' :
		 printf("The decimal value of %c is --> %d",n,n);
		 break;
	 case '1' :
	 		 printf("The decimal value of %c is --> %d",n,n);
	 		 break;
	 case '2' :
	 		 printf("The decimal value of %c is --> %d",n,n);
	 		 break;
	 case '3' :
	 		 printf("The decimal value of %c is --> %d",n,n);
	 		 break;
	 case '4' :
	 		 printf("The decimal value of %c is --> %d",n,n);
	 		 break;
	 case '5' :
	 		 printf("The decimal value of %c is --> %d",n,n);
	 		 break;
	 case '6' :
	 		 printf("The decimal value of %c is --> %d",n,n);
	 		 break;
	 case '7' :
	 		 printf("The decimal value of %c is --> %d",n,n);
	 		 break;
	 case '8' :
	 		 printf("The decimal value of %c is --> %d",n,n);
	 		 break;
	 case '9' :
	 		 printf("The decimal value of %c is --> %d",n,n);
	 		 break;
	 default : break;
	 }
	 return 0;
}
