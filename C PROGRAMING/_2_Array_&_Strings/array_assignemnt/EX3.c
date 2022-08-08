/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to find transpose of a matrix
 Description : EX3
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a[20][20], b[20][20];
	int i,  j, x, y;	/* x for rows, y for coulomns*/
	printf("ENTER ROWS THEN COULOMNS OF THE MATRIX  :");
	fflush(stdin);	fflush(stdout);
	scanf("%d%d",&x,&y);
	/*ENTERING THE MATRIX BY USER*/
	printf("\nENTER THE MATRIX :");
	for(i = 0;i < x;i++)
	{
		for(j = 0; j < y; j++)
		{
			printf("\nENTER a[%d][%d]: ",i,j);
			fflush(stdin);	fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
		/*Displaying the matrix*/
	printf("\nTHE MATRIX IS:\n");
	for(i = 0;i < x;i++)
	{
		for(j = 0;j < y;j++)
		{
			printf("%.2f  ",a[i][j]);
		}
		printf("\n");
	}
		/*Finding the transpose*/
	for(i = 0;i < x;i++)
	{
		for(j = 0;j < y;j++)
		{
			b[j][i] = a[i][j];
		}
	}
	/*Displaying the inverse of the matrix*/
		printf("\nTHE INVERSE MATRIX IS:\n");
		for(i = 0;i < y;i++)
		{
			for(j = 0;j < x;j++)
			{
				printf("%.2f  ",b[i][j]);
			}
			printf("\n");
		}
	return 0;
}
