/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to find sum of 2 matrices of order 2*2 using
  	  	  	   multidimentional arrays, where elements of matrix entered by user.
 Description : EX1
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int i, j;
		/*Entering firist matrix by user*/
	printf("\nENTER FIRST MATRIX :");
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("\nENTER a[%d][%d]: ",i,j);
			fflush(stdin);	fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	/*Entering second matrix by user*/
	printf("\nENTER SECOND MATRIX :");
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("\nENTER b[%d][%d]: ",i,j);
			fflush(stdin);	fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
		/*Adding the 2 matrices*/
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 2;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
		/*Printing the summition matrix*/
	printf("\nTHE SUM IS:\n");
	for(i = 0;i < 2;i++)
	{
		for(j = 0;j < 2;j++)
		{
			printf("%f ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
