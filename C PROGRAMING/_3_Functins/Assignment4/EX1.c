/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to find prime numbers between 2 intervals using
 	 	 	   functions
 Description : EX1_Fuctions
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

int prime_num_check(int x);
int main()
{
	int n, n1, n2, flag;
	printf("Entere twe intervals\n");
	fflush(stdin);	fflush(stdout);
	scanf("%d%d",&n1,&n2);
	printf("The prime numbers between %d and %d are:\n",n1,n2);
	for(n=n1; n<=n2; n++)
	{
		flag = prime_num_check(n);
		if (flag == 0)
			printf("%d ",n);
	}
	return 0;
}

int prime_num_check(int x)
{
	int i, flag = 0;
	for(i=2; i <= x/2; i++)
	{
		if (x % i ==0)
			flag++;
	}
	return flag;
}



