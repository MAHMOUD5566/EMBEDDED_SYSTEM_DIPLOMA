/*
 ============================================================================
 Name        : main.c
 Author      : Mahmoud Abdelbaset
 Version     :
 Copyright   : Write a C program to calculate average using an array
 Description : EX2
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a[100];
	int i,  x;
	float sum = 0, avg;

	printf("ENTER  NUMBER OF THE DATA IN RANGE[0 TO 100] :");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&x);
	if(x > 0 && x <= 100)
	{
		for(i = 0;i < x;i++)
		{
			printf("\nENTER A NUMBER");
			fflush(stdin);	fflush(stdout);
			scanf("%f",&a[i]);
			sum += a[i];
		}
		avg = sum / x;
		printf("/nTHE AVERAGE IS : %f",avg);
	}
	else
		printf("\nNOT IN RANGE");

	return 0;
}
