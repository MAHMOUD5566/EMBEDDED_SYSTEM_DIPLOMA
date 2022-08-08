/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to find factorial of a number using recursion
 Description : EX2_Fuctions
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

int factorial_fun(int x);
int main()
{
	int n, f ;
	printf("ENTER AN INTEGER\n");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	f = factorial_fun(5);
	printf("\nTHR FACTORIA OF %d IS %d:",n,f);
	return 0;
}
int factorial_fun(int x)
{
	if(x > 1)
		return x * factorial_fun(x-1);
}
