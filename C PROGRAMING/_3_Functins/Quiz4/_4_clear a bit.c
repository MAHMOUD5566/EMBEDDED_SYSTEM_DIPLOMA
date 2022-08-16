/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C function that clear a bit in a given number
 Description : _4_quiz4
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

int clr_bit(int n,int bit);
int main()
{
	int n, b;
		/*Entering thr number*/
	printf("ENTER A NUMBER :");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &n);
		/*Entering the bit to be cleared*/
	printf("ENTER BIT :");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &b);
	printf("%d" ,clr_bit(n,b));
	return 0;
}
int clr_bit(int n,int bit)
{
	return n &= ( ~(1<<bit) );
}

