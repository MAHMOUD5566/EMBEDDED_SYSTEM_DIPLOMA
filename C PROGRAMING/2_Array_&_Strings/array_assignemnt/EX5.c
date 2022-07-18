/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to search for an element in an array
 Description : EX4
 ============================================================================
 */
#include <stdio.h>

int main()
{
	int a[100];
	int n,i,elem;
	printf("ENTER NUMBER OF ELEMNTS: \n");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	printf("ENTER THE ELEMNTS: \n");
	for(i = 0; i < n; ++i)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d",&a[i]);
	}
	/*Displaing Before Insertion */
	printf("THE ARRAY ELEMENTS ARE :\n");
	for(i = 0;i < n;++i)
	{
		printf("%d  ",a[i]);
	}
	printf("\nENTER THE ELEMNT YOU WANT TO SEARCH FOR: \n");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&elem);
		/*To search for the element*/
	for(i =0; i<n && elem!=a[i]; i++);
	if(i < n)
		printf("\nTHE ELEMNT IS AT LOCATION = %d: \n",i+1);
	else
		printf("\nTHE ELEMNT IS NOT IN THE ARRAY \n");
	return 0;
}


