/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Problem     : Write a C program to o demonstrate how to handle the pointers in the program. 
 Description : Pointers_EX1
 ============================================================================
 */
#include <stdio.h>



int main()
{
	 int m = 29;
	int *ab = &m;
	printf("Address of m : %x\nValue of m : %d",&m,m);
	printf("\nAddress of pointer ab : %x\nContent of pointer ab : %d",ab,*ab);
	*ab = 34;
	printf("\nAddress of pointer ab : %x\nContent of pointer ab : %d",ab,*ab);
	*ab = 7;
	printf("\nAddress of m : %x\nValue of m : %d",&m,m);
	printf("\nAddress of pointer ab in memory : %x",&ab);
	return 0;
}
