/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to insert an element in an array
 Description : EX4
 ============================================================================
 */
#include <stdio.h>

int main()
{
	int a[100];
	int n,i,elem,loc;
	char x = 'y';
	printf("ENTER NUMBER OF ELEMNTS: \n");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	for(i = 0; i <= n; ++i)
	{
		a[i] = i;
	}
	/*Displaing Before Insertion */
	printf("THE ARRAY LOCATIONS IS :\n");
		for(i = 1;i <= n;i++)
		{
			printf("%d  ",a[i]);
		}
	while(x == 'y' || x == 'Y')
	{
		printf("\nENTER THE ELEMNT YOU WANT TO INSERT: \n");
		fflush(stdin);	fflush(stdout);
		scanf("%d",&elem);
		printf("ENTER THE LOCATION: \n");
		fflush(stdin);	fflush(stdout);
		scanf("%d",&loc);
		a[loc] = elem;
			/*Displaing AFTER Insertion */
		printf("THE ARRAY AFTER INSERTION IS :\n");
		for(i = 1;i <= n;i++)
		{
			printf("%d  ",a[i]);
		}
		printf("\n TO enter another element press Y : \n");
		fflush(stdin);	fflush(stdout);
		scanf("%c",&x);
	}

	return 0;
}

