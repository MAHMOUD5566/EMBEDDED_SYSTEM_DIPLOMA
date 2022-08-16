/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program for swapping 2 arrays with different lengths
 Description : _2_quiz4
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

int main()
{
	int a[5], b[5], c[5];
	int i, j;
	printf("ENTER FIRST ARRAY :");
	fflush(stdin);	fflush(stdout);
	for(i=0; i < 5; i++)
		scanf("%d",&a[i]);
	printf("\nENTER SECOND ARRAY :");
	fflush(stdin);	fflush(stdout);
	for(i=0; i < 5; i++)
		scanf("%d",&b[i]);
		/*Swapping the arrays*/
	for(i=0, j=4; i < 4; i++, j--)
		{
		    c[i] = a[i];
			a[i] = b[i];
		    b[i] = c[i];
		}
		/*Printing first array*/
	printf("\nFIRST ARRAY AFTER SWAPING = :");
	for(i = 0; i < 4; i++)
		printf("%d",a[i]);
		/*Printing second array*/
		printf("\nSECOND ARRAY AFTER SWAPING = :");
		for(i = 0; i < 4; i++)
			printf("%d",b[i]);
	return 0;
}
