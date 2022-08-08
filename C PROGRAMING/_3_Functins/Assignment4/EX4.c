/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to calculate the power of number using recursion
 Description : EX3_Fuctions
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

int power(int n, int p);
int main()
{
	int n, pw;
	printf("ENTER BASE NUMBER\n");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	printf("ENTER POWER(POSITIVE NUMBER)\n");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&pw);
	printf("%d ^ %d = %d",n,pw,power(n, pw));
	return 0;
}
int power(int n,int p)
{

	if(p > 0)
		return n*power(n,p-1);
	else
		return 1;

}
