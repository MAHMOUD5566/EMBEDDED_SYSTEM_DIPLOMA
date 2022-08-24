/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Problem     : Write a C program to show a pointer to an array which contents
   	   	   	   are pointer to structure.
 Description : Pointers_EX5
 ============================================================================
 */
#include <stdio.h>
#define pi 3.142857
#define area(x) (pi*x*x)

int main()
{
	int r;
	float area;
	printf("ENTER RADIAS: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&r);
	area = area(r);
	printf("\nAREA IS : %.2f",area);
	return 0;
}

