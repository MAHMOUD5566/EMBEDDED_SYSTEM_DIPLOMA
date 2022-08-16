/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to get last occurance of a number
 Description : _7_quiz4
 ============================================================================
 */
#include <stdio.h>
#include <math.h>

void occ_fun(int a[], int size,int n);
int main()
{
	int a[50], size, n, i;
	printf("ENTER THE SIZE OF THE ARRAY");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&size);
	printf("\nENTER THE ARRAY");
	for(i =0; i<size; i++)
	{
		fflush(stdin);	fflush(stdout);
		scanf("%d",&a[i]);
	}
	printf("\nENTER THE NUMBER YOU WANT TO FIND LAST OCCURANE FOR");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);
	/*Last occurance function*/
	occ_fun(a, size, n);
	return 0;
}
void occ_fun(int a[],int size,int n)
{
	for(--size; size >=0; size--)
	{
		if(a[size] == n)
			printf("\nlast occurance of %d is %d",n,size+1);
	}
}

