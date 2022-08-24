/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Problem     : Write a C program to print the elements of an array in reverse order
 Description : Pointers_EX4
 ============================================================================
 */
#include <stdio.h>



int main()
{
	int a[15], rev_a[15];
	int *ptr = a, *rev_ptr = rev_a;
	int i, n;
	printf("ENTER NUMBER OF ELEMTS :");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	printf("ENTER ARRAY ELEMENTS :\n");
	for(i=0; i<n; i++)
	{
		printf("ELEMENT %d : ",i+1);
		fflush(stdin);	fflush(stdout);
		scanf("%d",&a[i]);
	}
		/*STORING REVERSE VALUE IN ANOTHER ARAY*/
	ptr = &a[n-1];
	for(i=0; i<n;i++)
		*(rev_ptr+i) = *(ptr-i);
	/*DISPLAYING THE REVERSE ARRAY*/
	for(i=0; i<n; i++)
		{
			printf("ELEMENT %d is : %d\n",i+1,rev_a[i]);
		}
	return 0;
}
